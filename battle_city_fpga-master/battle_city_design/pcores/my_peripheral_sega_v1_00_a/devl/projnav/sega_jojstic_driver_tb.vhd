--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:51:26 05/18/2016
-- Design Name:   
-- Module Name:   C:/materija/ra115/battle_city_fpga-master/battle_city_design/pcores/my_peripheral_sega_v1_00_a/devl/projnav/sega_jojstic_driver_tb.vhd
-- Project Name:  my_peripheral_sega
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: sega_joystic_driver
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY sega_jojstic_driver_tb IS
END sega_jojstic_driver_tb;
 
ARCHITECTURE behavior OF sega_jojstic_driver_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT sega_joystic_driver
    PORT(
         data_i : IN  std_logic_vector(5 downto 0);
         mux_o : OUT  std_logic;
         sel_o : OUT  std_logic;
         joy_o : OUT  std_logic_vector(23 downto 0);
         clk_i : IN  std_logic;
         rst_in : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal data_i : std_logic_vector(5 downto 0) := (others => '0');
   signal clk_i : std_logic := '0';
   signal rst_in : std_logic := '0';

 	--Outputs
   signal mux_o : std_logic;
   signal sel_o : std_logic;
   signal joy_o : std_logic_vector(23 downto 0);

   -- Clock period definitions
   constant clk_i_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: sega_joystic_driver PORT MAP (
          data_i => data_i,
          mux_o => mux_o,
          sel_o => sel_o,
          joy_o => joy_o,
          clk_i => clk_i,
          rst_in => rst_in
        );

   -- Clock process definitions
   clk_i_process :process
   begin
		clk_i <= '0';
		wait for clk_i_period/2;
		clk_i <= '1';
		wait for clk_i_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	
		
		rst_in <= '1';
		data_i <= "100010";
		
      wait for clk_i_period*50;
		
		rst_in <= '0';

      -- insert stimulus here 

      wait;
   end process;

END;
