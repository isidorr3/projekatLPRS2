----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    19:18:57 05/11/2016 
-- Design Name: 
-- Module Name:    sega_joystic_driver - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity sega_joystic_driver is
    Port ( data_i : in  STD_LOGIC_VECTOR(5 downto 0);
			  mux_o : out  STD_LOGIC;
			  sel_o : out  STD_LOGIC;
           joy_o : out  STD_LOGIC_VECTOR(23 downto 0);
			  clk_i : in  STD_LOGIC;
			  rst_in : in  STD_LOGIC
			  );
end sega_joystic_driver;

architecture Behavioral of sega_joystic_driver is

component reg is
	generic(
		WIDTH    : positive := 1;
		RST_INIT : integer := 0
	);
	port(
		i_clk  : in  std_logic;
		in_rst : in  std_logic;
		i_en   : in  std_logic;
		i_d    : in  std_logic_vector(WIDTH-1 downto 0);
		o_q    : out std_logic_vector(WIDTH-1 downto 0)
	);
end component reg;


signal counter 	: std_logic_vector(16 downto 0);
signal counter_tc : std_logic;
signal en_reg1    : std_logic;
signal en_reg2    : std_logic;
signal en_reg3    : std_logic;
signal en_reg4    : std_logic;
signal mux_s    : std_logic :='0';
signal sel_s    : std_logic :='0';
type stateType is (reg1, reg2, reg3, reg4);
signal state, next_state: stateType;

begin

joy_reg1: reg
generic map(
	WIDTH => 6,
	RST_INIT => 0
)
port map(
	i_clk => clk_i,
	in_rst =>rst_in,
	i_en => en_reg1,
	i_d => data_i,
	o_q => joy_o(23 downto 18)	
);

joy_reg2: reg
generic map(
	WIDTH => 6,
	RST_INIT => 0
)
port map(
	i_clk => clk_i,
	in_rst => rst_in,
	i_en => en_reg2,
	i_d => data_i,
	o_q => joy_o(17 downto 12)	
);

joy_reg3: reg
generic map(
	WIDTH => 6,
	RST_INIT => 0
)
port map(
	i_clk => clk_i,
	in_rst => rst_in,
	i_en => en_reg3,
	i_d => data_i,
	o_q => joy_o(11 downto 6)	
);

joy_reg4: reg
generic map(
	WIDTH => 6,
	RST_INIT => 0
)
port map(
	i_clk => clk_i,
	in_rst => rst_in,
	i_en => en_reg4,
	i_d => data_i,
	o_q => joy_o(5 downto 0)	
);

en_reg1 <= '1' when (mux_s = '0' and sel_s = '0') else
			  '0';
			  
en_reg2 <= '1' when (mux_s = '0' and sel_s = '1') else
			  '0';
			  
en_reg3 <= '1' when (mux_s = '1' and sel_s = '0') else
			  '0';
			  
en_reg4 <= '1' when (mux_s = '1' and sel_s = '1') else
			  '0';

mux_o <= mux_s;
sel_o <= sel_s;


process (clk_i, rst_in)
      begin
         if (rst_in = '0') then
            counter <= (others => '0');
         elsif (clk_i'event and clk_i = '1') then
				counter <= counter + '1'; 
				if counter = 99999 then
				--if counter = 10 then
					counter_tc <= '1';
					counter 	  <= (others => '0');
				else
					counter_tc <= '0';
				end if;
					
         end if;
end process;

process(rst_in, clk_i)
begin
	if (rst_in = '0') then
      state <= reg1;
	elsif (clk_i'event and clk_i = '1') then
		state<=  next_state;	
	end if;
end process;

process(state, counter_tc)
begin
	if counter_tc = '1' then
	
	case(state) is
	when reg1 =>
			next_state <= reg2;
			mux_s <= '0';
			sel_s <= '1';
		when reg2 =>
			next_state <= reg3;
			mux_s <= '1';
			sel_s <= '0';
		when reg3 =>
			next_state <= reg4;
			mux_s <= '1';
			sel_s <= '1';
		when reg4 =>
			next_state <= reg1;
			mux_s <= '0';
			sel_s <= '0';
	end case;
	
	end if;
end process;

end Behavioral;

