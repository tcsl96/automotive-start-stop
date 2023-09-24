# Start-Stop System - Stellantis
Repo for the model based design of a start/stop car system.

# Start/Stop System Test Suites Documentation

The Start/Stop system has 6 test suites that aim to test specific parts of the system. 
In this document, the suites and their respective test cases will be listed identified with tags for each tested part.
Every Test Case is identified with the 'TC' tag followed by a letter that identifies for which suite it belongs. Below there is a table with the letters from each suite identified. After the table, there will be listed the TC's with their identifiers.

| Suite Name | Suite Letter |
|----------------------|----------------------|
| Dynamics Test Suite  | D  | 
| Hardware Test Suite  | H  | 
| Power Test Suite  | P  | 
| Safety Test Suite  | S  | 
| Warnings Test Suite  | W  | 
| Wellbeing Test Suite  | WB  | 

## Dynamics Test Suite
### [TCD001] Dynamic Speed Check (True)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p><p>Declared spd variable of type float.</p></p>
<p><b>Steps:</b> <p>Step 1. Assign the value of 2.123 to the spd variable.</p><p>Step 2. Insert a call to the function checkSpeed().</p><p>Step 3. Checks if the returned value from the checkSpeed functin is equals to 1.</p></p>
<p><b>Expected results:</b><p>Step 1. The speed value is saved on the spd variable.</p><p>Step 2. The checkSpeed function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkSpeed function being equals to 1.</p></p>

### [TCD002] Dynamic Speed Check (False)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p><p>Declared spd variable of type float.</p></p>
<p><b>Steps:</b> <p>Step 1. Assign the value of 6.123 to the spd variable.</p><p>Step 2. Insert a call to the function CheckSpeed().</p><p>Step 3. Checks if the returned value from the CheckSpeed functin is equals to 0.</p></p>
<p><b>Expected results:</b><p>Step 1. The speed value is saved on the spd variable.</p><p>Step 2. The CheckSpeed function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the CheckSpeed function being equals to 0.</p></p>

### [TCD003] Check Brake (True)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p><p>Declared time_test variable of type uint16_t.</p><p>Declared t variable of type uint8_t.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the time_test variable with the 0 value.</p><p>Step 2. Insert a call to the function checkBrake() passing the t parameter and the time_test respectively.</p><p>Step 3. Checks if the returned value from the checkBrake function is equals to 0.</p></p>
<p><b>Expected results:</b><p>Step 1. The time in the beginning of the test execution is saved on the time_test variable.</p><p>Step 2. The CheckBrake function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkBrake function being equals to 0.</p></p>

### [TCD004] Check Brake (True 2)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p><p>Declared time_test variable of type uint16_t.</p><p>Declared t variable of type uint8_t.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the time_test variable with the 10 value.</p><p>Step 2. Insert a call to the function checkBrake() passing the t parameter and the time_test respectively.</p><p>Step 3. Checks if the returned value from the checkBrake function is equals to 0.</p></p>
<p><b>Expected results:</b><p>Step 1. The time in the beginning of the test execution is saved on the time_test variable.</p><p>Step 2. The CheckBrake function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkBrake function being equals to 0.</p></p>

### [TCD005] Check Brake (False)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p><p>Declared time_test variable of type uint16_t.</p><p>Declared f variable of type uint8_t.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the time_test variable with the 0 value.</p><p>Step 2. Insert a call to the function checkBrake() passing the f parameter and the time_test respectively.</p><p>Step 3. Checks if the returned value from the checkBrake function is equals to 0.</p></p>
<p><b>Expected results:</b><p>Step 1. The time in the beginning of the test execution is saved on the time_test variable.</p><p>Step 2. The CheckBrake function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkBrake function being equals to 0.</p></p>

### [TCD006] Check Brake (False 2)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p><p>Declared time_test variable of type uint16_t.</p><p>Declared f variable of type uint8_t.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the time_test variable with the 10 value.</p><p>Step 2. Insert a call to the function checkBrake() passing the f parameter and the time_test respectively.</p><p>Step 3. Checks if the returned value from the checkBrake function is equals to 0.</p></p>
<p><b>Expected results:</b><p>Step 1. The time in the beginning of the test execution is saved on the time_test variable.</p><p>Step 2. The CheckBrake function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkBrake function being equals to 0.</p></p>
  
## Hardware Test Suite
### [TCH001] Check Hardware (True)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize all the sensors state variables (speed_sensor_state, brake_sensor_state, eng_temp_sensor_state, battery_sensor_state, trunk_sensor_state, door_sensor_state, seatbelt_sensor_state, air_cond_sensor_state) with the 1 value.</p><p>Step 2. Insert a call to the function checkHardware().</p><p>Step 3. Checks if the returned value from the checkHardware function is equals to 1.</p></p>
<p><b>Expected results:</b><p>Step 1. The sensor state variables are stored with the value 1.</p><p>Step 2. The CheckHardware function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkHardware function is equal to 1.</p></p>

### [TCH002] Check Hardware (True 2)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the mandatory sensors state variables (speed_sensor_state, brake_sensor_state, eng_temp_sensor_state, battery_sensor_state) and the air_cond_sensor_state with the 1 value and 0 to the remaining sensors (hood_sensor_state, trunk_sensor_state, door_sensor_state, seatbelt_sensor_state).</p><p>Step 2. Insert a call to the function checkHardware().</p><p>Step 3. Checks if the returned value from the checkHardware function is equals to 1.</p></p>
<p><b>Expected results:</b><p>Step 1. The sensor state variables are stored with their respective detailed values.</p><p>Step 2. The CheckHardware function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkHardware function is equal to 1.</p></p>
  
### [TCH003] Check Hardware (True 3)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the mandatory sensors state variables (speed_sensor_state, brake_sensor_state, eng_temp_sensor_state, battery_sensor_state) and the seatbelt_sensor_state with the 1 value and 0 to the remaining sensors (hood_sensor_state, trunk_sensor_state, door_sensor_state, air_cond_sensor_state).</p><p>Step 2. Insert a call to the function checkHardware().</p><p>Step 3. Checks if the returned value from the checkHardware function is equals to 1.</p></p>
<p><b>Expected results:</b><p>Step 1. The sensor state variables are stored with their respective detailed values.</p><p>Step 2. The CheckHardware function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkHardware function is equal to 1.</p></p>
  
### [TCH004] Check Hardware (True 4)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the mandatory sensors state variables (speed_sensor_state, brake_sensor_state, eng_temp_sensor_state, battery_sensor_state) and the door_sensor_state with the 1 value and 0 to the remaining sensors (hood_sensor_state, trunk_sensor_state, seatbelt_sensor_state, air_cond_sensor_state).</p><p>Step 2. Insert a call to the function checkHardware().</p><p>Step 3. Checks if the returned value from the checkHardware function is equals to 1.</p></p>
<p><b>Expected results:</b><p>Step 1. The sensor state variables are stored with their respective detailed values.</p><p>Step 2. The CheckHardware function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkHardware function is equal to 1.</p></p>
  
### [TCH005] Check Hardware (True 5)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the mandatory sensors state variables (speed_sensor_state, brake_sensor_state, eng_temp_sensor_state, battery_sensor_state) and the trunk_sensor_state with the 1 value and 0 to the remaining sensors (hood_sensor_state, door_sensor_state, seatbelt_sensor_state, air_cond_sensor_state).</p><p>Step 2. Insert a call to the function checkHardware().</p><p>Step 3. Checks if the returned value from the checkHardware function is equals to 1.</p></p>
<p><b>Expected results:</b><p>Step 1. The sensor state variables are stored with their respective detailed values.</p><p>Step 2. The CheckHardware function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkHardware function is equal to 1.</p></p>
  
### [TCH006] Check Hardware (True 6)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the mandatory sensors state variables (speed_sensor_state, brake_sensor_state, eng_temp_sensor_state, battery_sensor_state) and the hood_sensor_state with the 1 value and 0 to the remaining sensors (trunk_sensor_state, door_sensor_state, seatbelt_sensor_state, air_cond_sensor_state).</p><p>Step 2. Insert a call to the function checkHardware().</p><p>Step 3. Checks if the returned value from the checkHardware function is equals to 1.</p></p>
<p><b>Expected results:</b><p>Step 1. The sensor state variables are stored with their respective detailed values.</p><p>Step 2. The CheckHardware function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkHardware function is equal to 1.</p></p>
  
### [TCH007] Check Hardware (True 7)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the mandatory sensors state variables (speed_sensor_state, brake_sensor_state, eng_temp_sensor_state, battery_sensor_state), the hood_sensor_state and the air_cond_sensor_state with the 1 value and 0 to the remaining sensors (trunk_sensor_state, door_sensor_state, seatbelt_sensor_state).</p><p>Step 2. Insert a call to the function checkHardware().</p><p>Step 3. Checks if the returned value from the checkHardware function is equals to 1.</p></p>
<p><b>Expected results:</b><p>Step 1. The sensor state variables are stored with their respective detailed values.</p><p>Step 2. The CheckHardware function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkHardware function is equal to 1.</p></p>

### [TCH008] Check Hardware (True 8)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the mandatory sensors state variables (speed_sensor_state, brake_sensor_state, eng_temp_sensor_state, battery_sensor_state), the hood_sensor_state and the seatbelt_sensor_state with the 1 value and 0 to the remaining sensors (trunk_sensor_state, door_sensor_state, air_cond_sensor_state).</p><p>Step 2. Insert a call to the function checkHardware().</p><p>Step 3. Checks if the returned value from the checkHardware function is equals to 1.</p></p>
<p><b>Expected results:</b><p>Step 1. The sensor state variables are stored with their respective detailed values.</p><p>Step 2. The CheckHardware function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkHardware function is equal to 1.</p></p>

### [TCH009] Check Hardware (True 9)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the mandatory sensors state variables (speed_sensor_state, brake_sensor_state, eng_temp_sensor_state, battery_sensor_state), the hood_sensor_state and the door_sensor_state with the 1 value and 0 to the remaining sensors (trunk_sensor_state, seatbelt_sensor_state, air_cond_sensor_state).</p><p>Step 2. Insert a call to the function checkHardware().</p><p>Step 3. Checks if the returned value from the checkHardware function is equals to 1.</p></p>
<p><b>Expected results:</b><p>Step 1. The sensor state variables are stored with their respective detailed values.</p><p>Step 2. The CheckHardware function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkHardware function is equal to 1.</p></p>
  
### [TCH010] Check Hardware (True 10)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the mandatory sensors state variables (speed_sensor_state, brake_sensor_state, eng_temp_sensor_state, battery_sensor_state), the hood_sensor_state and the trunk_sensor_state with the 1 value and 0 to the remaining sensors (door_sensor_state, seatbelt_sensor_state, air_cond_sensor_state).</p><p>Step 2. Insert a call to the function checkHardware().</p><p>Step 3. Checks if the returned value from the checkHardware function is equals to 1.</p></p>
<p><b>Expected results:</b><p>Step 1. The sensor state variables are stored with their respective detailed values.</p><p>Step 2. The CheckHardware function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkHardware function is equal to 1.</p></p>
  
### [TCH011] Check Hardware (True 11)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the door_sensor_state and seatbelt_sensor_state variables with the 0 value and 1 to the remaining sensors (speed_sensor_state, brake_sensor_state, eng_temp_sensor_state, battery_sensor_state, hood_sensor_state, trunk_sensor_state, air_cond_sensor_state).</p><p>Step 2. Insert a call to the function checkHardware().</p><p>Step 3. Checks if the returned value from the checkHardware function is equals to 1.</p></p>
<p><b>Expected results:</b><p>Step 1. The sensor state variables are stored with their respective detailed values.</p><p>Step 2. The CheckHardware function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkHardware function is equal to 1.</p></p>
  
### [TCH012] Check Hardware (True 12)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the door_sensor_state and air_cond_sensor_state variables with the 0 value and 1 to the remaining sensors (speed_sensor_state, brake_sensor_state, eng_temp_sensor_state, battery_sensor_state, hood_sensor_state, trunk_sensor_state, seatbelt_sensor_state).</p><p>Step 2. Insert a call to the function checkHardware().</p><p>Step 3. Checks if the returned value from the checkHardware function is equals to 1.</p></p>
<p><b>Expected results:</b><p>Step 1. The sensor state variables are stored with their respective detailed values.</p><p>Step 2. The CheckHardware function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkHardware function is equal to 1.</p></p>
  
### [TCH013] Check Hardware (True 13)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the seatbelt_sensor_state and air_cond_sensor_state variables with the 0 value and 1 to the remaining sensors (speed_sensor_state, brake_sensor_state, eng_temp_sensor_state, battery_sensor_state, hood_sensor_state, trunk_sensor_state, door_sensor_state).</p><p>Step 2. Insert a call to the function checkHardware().</p><p>Step 3. Checks if the returned value from the checkHardware function is equals to 1.</p></p>
<p><b>Expected results:</b><p>Step 1. The sensor state variables are stored with their respective detailed values.</p><p>Step 2. The CheckHardware function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkHardware function is equal to 1.</p></p>
  
### [TCH014] Check Hardware (True 14)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the seatbelt_sensor_state variable with the 0 value and 1 to the remaining sensors (speed_sensor_state, brake_sensor_state, eng_temp_sensor_state, battery_sensor_state, hood_sensor_state, trunk_sensor_state, door_sensor_state, air_cond_sensor_state).</p><p>Step 2. Insert a call to the function checkHardware().</p><p>Step 3. Checks if the returned value from the checkHardware function is equals to 1.</p></p>
<p><b>Expected results:</b><p>Step 1. The sensor state variables are stored with their respective detailed values.</p><p>Step 2. The CheckHardware function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkHardware function is equal to 1.</p></p>

### [TCH015] Check Hardware (True 15)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the air_cond_sensor_state variable with the 0 value and 1 to the remaining sensors (speed_sensor_state, brake_sensor_state, eng_temp_sensor_state, battery_sensor_state, hood_sensor_state, trunk_sensor_state, door_sensor_state, seatbelt_sensor_state).</p><p>Step 2. Insert a call to the function checkHardware().</p><p>Step 3. Checks if the returned value from the checkHardware function is equals to 1.</p></p>
<p><b>Expected results:</b><p>Step 1. The sensor state variables are stored with their respective detailed values.</p><p>Step 2. The CheckHardware function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkHardware function is equal to 1.</p></p>
  
### [TCH016] Check Hardware (False)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the speed_sensor_state variable with the 0 value and 1 to the remaining sensors (brake_sensor_state, eng_temp_sensor_state, battery_sensor_state, hood_sensor_state, trunk_sensor_state, door_sensor_state, seatbelt_sensor_state, air_cond_sensor_state).</p><p>Step 2. Insert a call to the function checkHardware().</p><p>Step 3. Checks if the returned value from the checkHardware function is equals to 0.</p></p>
<p><b>Expected results:</b><p>Step 1. The sensor state variables are stored with their respective detailed values.</p><p>Step 2. The CheckHardware function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkHardware function is equal to 0.</p></p>
  
### [TCH017] Check Hardware (False 2)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the brake_sensor_state variable with the 0 value and 1 to the remaining sensors (speed_sensor_state, eng_temp_sensor_state, battery_sensor_state, hood_sensor_state, trunk_sensor_state, door_sensor_state, seatbelt_sensor_state, air_cond_sensor_state).</p><p>Step 2. Insert a call to the function checkHardware().</p><p>Step 3. Checks if the returned value from the checkHardware function is equals to 0.</p></p>
<p><b>Expected results:</b><p>Step 1. The sensor state variables are stored with their respective detailed values.</p><p>Step 2. The CheckHardware function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkHardware function is equal to 0.</p></p>
  
### [TCH018] Check Hardware (False 3)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the eng_temp_sensor_state variable with the 0 value and 1 to the remaining sensors (speed_sensor_state, brake_sensor_state, battery_sensor_state, hood_sensor_state, trunk_sensor_state, door_sensor_state, seatbelt_sensor_state, air_cond_sensor_state).</p><p>Step 2. Insert a call to the function checkHardware().</p><p>Step 3. Checks if the returned value from the checkHardware function is equals to 0.</p></p>
<p><b>Expected results:</b><p>Step 1. The sensor state variables are stored with their respective detailed values.</p><p>Step 2. The CheckHardware function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkHardware function is equal to 0.</p></p>

### [TCH019] Check Hardware (False 4)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the battery_sensor_state variable with the 0 value and 1 to the remaining sensors (speed_sensor_state, brake_sensor_state, eng_temp_sensor_state, hood_sensor_state, trunk_sensor_state, door_sensor_state, seatbelt_sensor_state, air_cond_sensor_state).</p><p>Step 2. Insert a call to the function checkHardware().</p><p>Step 3. Checks if the returned value from the checkHardware function is equals to 0.</p></p>
<p><b>Expected results:</b><p>Step 1. The sensor state variables are stored with their respective detailed values.</p><p>Step 2. The CheckHardware function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkHardware function is equal to 0.</p></p>
  
### [TCH020] Check Hardware (False 5)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize mandatory sensors variables (speed_sensor_state, brake_sensor_state, eng_temp_sensor_state, battery_sensor_state) with the 1 value and 0 to the remaining sensors (hood_sensor_state, trunk_sensor_state, door_sensor_state, seatbelt_sensor_state, air_cond_sensor_state).</p><p>Step 2. Insert a call to the function checkHardware().</p><p>Step 3. Checks if the returned value from the checkHardware function is equals to 0.</p></p>
<p><b>Expected results:</b><p>Step 1. The sensor state variables are stored with their respective detailed values.</p><p>Step 2. The CheckHardware function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkHardware function is equal to 0.</p></p>
  
### [TCH021] Check Hardware (False 6)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize mandatory sensors variables (speed_sensor_state, brake_sensor_state, eng_temp_sensor_state, battery_sensor_state) with the 0 value and 1 to the remaining sensors (hood_sensor_state, trunk_sensor_state, door_sensor_state, seatbelt_sensor_state, air_cond_sensor_state).</p><p>Step 2. Insert a call to the function checkHardware().</p><p>Step 3. Checks if the returned value from the checkHardware function is equals to 0.</p></p>
<p><b>Expected results:</b><p>Step 1. The sensor state variables are stored with their respective detailed values.</p><p>Step 2. The CheckHardware function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkHardware function is equal to 0.</p></p>

## Power Test Suite
### [TCP001] Check Engine Temperature (True)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p><p>Declared test_fc_tmp variable of type float.</p></p>
<p><b>Steps:</b> <p>Step 1. Assign the value of 100 to the test_fc_tmp variable.</p><p>Step 2. Insert a call to the function checkEngTemp() passing the test_fc_tmp variable as a parameter.</p><p>Step 3. Checks if the returned value from the checkEngTemp function is equal to 1.</p></p>
<p><b>Expected results:</b><p>Step 1. The engine temperature value is saved on the test_fc_tmp variable.</p><p>Step 2. The checkEngTemp function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkEngTemp function is equal to 1.</p></p>

### [TCP002] Check Engine Temperature (False)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p><p>Declared test_fc_tmp variable of type float.</p></p>
<p><b>Steps:</b> <p>Step 1. Assign the value of 50 to the test_fc_tmp variable.</p><p>Step 2. Insert a call to the function checkEngTemp() passing the test_fc_tmp variable as a parameter.</p><p>Step 3. Checks if the returned value from the checkEngTemp function is equal to 0.</p></p>
<p><b>Expected results:</b><p>Step 1. The engine temperature value is saved on the test_fc_tmp variable.</p><p>Step 2. The checkEngTemp function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkEngTemp function is equal to 0.</p></p>

### [TCP003] Check Battery (True)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p><p>Declared soc variable of type float.</p></p>
<p><b>Steps:</b> <p>Step 1. Assign the value of 0.7 to the soc variable.</p><p>Step 2. Insert a call to the function checkBattery() passing the soc variable as a parameter.</p><p>Step 3. Checks if the returned value from the checkBattery function is equal to 1.</p></p>
<p><b>Expected results:</b><p>Step 1. The state of charge value is saved on the soc variable.</p><p>Step 2. The checkBattery function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkBattery function is equal to 1.</p></p>

### [TCP004] Check Battery (False)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p><p>Declared soc variable of type float.</p></p>
<p><b>Steps:</b> <p>Step 1. Assign the value of 0.3 to the soc variable.</p><p>Step 2. Insert a call to the function checkBattery() passing the soc variable as a parameter.</p><p>Step 3. Checks if the returned value from the checkBattery function is equal to 0.</p></p>
<p><b>Expected results:</b><p>Step 1. The state of charge value is saved on the soc variable.</p><p>Step 2. The checkBattery function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkBattery function is equal to 0.</p></p>

### [TCP005] Check Power (True)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p></p>
<p><b>Steps:</b> <p>Step 1. Create the variable fc_tmp and assign the value 100 to it.</p><p>Step 2. Create the variable SOC and assign the 0.7 value to it.</p><p>Step 3. Insert a call to the function checkPower().</p><p>Step 4. Checks if the returned value from the checkPower function is equal to 1.</p></p>
<p><b>Expected results:</b><p>Step 1. The engine temperature value is saved on the created variable: fc_tmp.</p><p>Step 2. The state of charge value is saved on the created variable: SOC.</p><p>Step 3. The checkPower function is called with no problems.</p><p>Step 4. The test passes due to the returned value by the checkPower function is equal to 1.</p></p>
  
### [TCP006] Check Power (False)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p></p>
<p><b>Steps:</b> <p>Step 1. Create the variable fc_tmp and assign the value 50 to it.</p><p>Step 2. Create the variable SOC and assign the 0.7 value to it.</p><p>Step 3. Insert a call to the function checkPower().</p><p>Step 4. Checks if the returned value from the checkPower function is equal to 0.</p></p>
<p><b>Expected results:</b><p>Step 1. The engine temperature value is saved on the created variable: fc_tmp.</p><p>Step 2. The state of charge value is saved on the created variable: SOC.</p><p>Step 3. The checkPower function is called with no problems.</p><p>Step 4. The test passes due to the returned value by the checkPower function is equal to 0.</p></p>

### [TCP007] Check Power (False 2)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p></p>
<p><b>Steps:</b> <p>Step 1. Create the variable fc_tmp and assign the value 100 to it.</p><p>Step 2. Create the variable SOC and assign the 0.3 value to it.</p><p>Step 3. Insert a call to the function checkPower().</p><p>Step 4. Checks if the returned value from the checkPower function is equal to 0.</p></p>
<p><b>Expected results:</b><p>Step 1. The engine temperature value is saved on the created variable: fc_tmp.</p><p>Step 2. The state of charge value is saved on the created variable: SOC.</p><p>Step 3. The checkPower function is called with no problems.</p><p>Step 4. The test passes due to the returned value by the checkPower function is equal to 0.</p></p>
  
### [TCP008] Check Power (False 3)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p></p>
<p><b>Steps:</b> <p>Step 1. Create the variable fc_tmp and assign the value 80 to it.</p><p>Step 2. Create the variable SOC and assign the 0.3 value to it.</p><p>Step 3. Insert a call to the function checkPower().</p><p>Step 4. Checks if the returned value from the checkPower function is equal to 0.</p></p>
<p><b>Expected results:</b><p>Step 1. The engine temperature value is saved on the created variable: fc_tmp.</p><p>Step 2. The state of charge value is saved on the created variable: SOC.</p><p>Step 3. The checkPower function is called with no problems.</p><p>Step 4. The test passes due to the returned value by the checkPower function is equal to 0.</p></p>

## Safety Test Suite
### [TCS001] Check Safety (True)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the safety sensors status variables (hood_sensor_status, trunk_sensor_status, door_sensor_status, seatbelt_sensor_status) with the 1 value.</p><p>Step 2. Insert a call to the function checkSafety().</p><p>Step 3. Checks if the returned value from the checkSafety function is equal to 1.</p></p>
<p><b>Expected results:</b><p>Step 1. The variables of the safety sensors status are saved with the 1 value.</p><p>Step 2. The checkSafety() function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkSafety function is equal to 1.</p></p>

### [TCS002] Check Safety (True 2)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the hood_sensor_status variable with the 0 value and 1 for the remaining safety sensors status variables (trunk_sensor_status, door_sensor_status, seatbelt_sensor_status).</p><p>Step 2. Insert a call to the function checkSafety().</p><p>Step 3. Checks if the returned value from the checkSafety function is equal to 1.</p></p>
<p><b>Expected results:</b><p>Step 1. The variables of the safety sensors status are saved with their detailed values.</p><p>Step 2. The checkSafety() function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkSafety function is equal to 1.</p></p>

### [TCS003] Check Safety (True 3)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the trunk_sensor_status variable with the 0 value and 1 for the remaining safety sensors status variables (hood_sensor_status, door_sensor_status, seatbelt_sensor_status).</p><p>Step 2. Insert a call to the function checkSafety().</p><p>Step 3. Checks if the returned value from the checkSafety function is equal to 1.</p></p>
<p><b>Expected results:</b><p>Step 1. The variables of the safety sensors status are saved with their detailed values.</p><p>Step 2. The checkSafety() function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkSafety function is equal to 1.</p></p>

### [TCS004] Check Safety (True 4)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the door_sensor_status variable with the 0 value and 1 for the remaining safety sensors status variables (hood_sensor_status, trunk_sensor_status, seatbelt_sensor_status).</p><p>Step 2. Insert a call to the function checkSafety().</p><p>Step 3. Checks if the returned value from the checkSafety function is equal to 1.</p></p>
<p><b>Expected results:</b><p>Step 1. The variables of the safety sensors status are saved with their detailed values.</p><p>Step 2. The checkSafety() function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkSafety function is equal to 1.</p></p>

### [TCS005] Check Safety (True 5)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the seatbelt_sensor_status variable with the 0 value and 1 for the remaining safety sensors status variables (hood_sensor_status, trunk_sensor_status, door_sensor_status).</p><p>Step 2. Insert a call to the function checkSafety().</p><p>Step 3. Checks if the returned value from the checkSafety function is equal to 1.</p></p>
<p><b>Expected results:</b><p>Step 1. The variables of the safety sensors status are saved with their detailed values.</p><p>Step 2. The checkSafety() function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkSafety function is equal to 1.</p></p>

### [TCS006] Check Safety (True 6)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the seatbelt_sensor_status and the hood_sensor_status variables with the 0 value and 1 for the remaining safety sensors status variables (trunk_sensor_status, door_sensor_status).</p><p>Step 2. Insert a call to the function checkSafety().</p><p>Step 3. Checks if the returned value from the checkSafety function is equal to 1.</p></p>
<p><b>Expected results:</b><p>Step 1. The variables of the safety sensors status are saved with their detailed values.</p><p>Step 2. The checkSafety() function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkSafety function is equal to 1.</p></p>

### [TCS007] Check Safety (True 7)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the trunk_sensor_status and the seatbelt_sensor_status variables with the 0 value and 1 for the remaining safety sensors status variables (hood_sensor_status, door_sensor_status).</p><p>Step 2. Insert a call to the function checkSafety().</p><p>Step 3. Checks if the returned value from the checkSafety function is equal to 1.</p></p>
<p><b>Expected results:</b><p>Step 1. The variables of the safety sensors status are saved with their detailed values.</p><p>Step 2. The checkSafety() function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkSafety function is equal to 1.</p></p>

### [TCS008] Check Safety (True 8)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the door_sensor_status and the seatbelt_sensor_status variables with the 0 value and 1 for the remaining safety sensors status variables (hood_sensor_status, trunk_sensor_status).</p><p>Step 2. Insert a call to the function checkSafety().</p><p>Step 3. Checks if the returned value from the checkSafety function is equal to 1.</p></p>
<p><b>Expected results:</b><p>Step 1. The variables of the safety sensors status are saved with their detailed values.</p><p>Step 2. The checkSafety() function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkSafety function is equal to 1.</p></p>

### [TCS009] Check Safety (True 9)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the trunk_sensor_status variable with the 1 value and 0 for the remaining safety sensors status variables (hood_sensor_status, door_sensor_status, seatbelt_sensor_status).</p><p>Step 2. Insert a call to the function checkSafety().</p><p>Step 3. Checks if the returned value from the checkSafety function is equal to 1.</p></p>
<p><b>Expected results:</b><p>Step 1. The variables of the safety sensors status are saved with their detailed values.</p><p>Step 2. The checkSafety() function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkSafety function is equal to 1.</p></p>

### [TCS010] Check Safety (True 10)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the door_sensor_status variable with the 1 value and 0 for the remaining safety sensors status variables (hood_sensor_status, trunk_sensor_status, seatbelt_sensor_status).</p><p>Step 2. Insert a call to the function checkSafety().</p><p>Step 3. Checks if the returned value from the checkSafety function is equal to 1.</p></p>
<p><b>Expected results:</b><p>Step 1. The variables of the safety sensors status are saved with their detailed values.</p><p>Step 2. The checkSafety() function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkSafety function is equal to 1.</p></p>

### [TCS011] Check Safety (True 11)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the seatbelt_sensor_status variable with the 1 value and 0 for the remaining safety sensors status variables (hood_sensor_status, trunk_sensor_status, door_sensor_status).</p><p>Step 2. Insert a call to the function checkSafety().</p><p>Step 3. Checks if the returned value from the checkSafety function is equal to 1.</p></p>
<p><b>Expected results:</b><p>Step 1. The variables of the safety sensors status are saved with their detailed values.</p><p>Step 2. The checkSafety() function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkSafety function is equal to 1.</p></p>

### [TCS012] Check Safety (True 12)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the door_sensor_status and the seatbelt_sensor_status variables with the 1 value and 0 for the remaining safety sensors status variables (hood_sensor_status, trunk_sensor_status).</p><p>Step 2. Insert a call to the function checkSafety().</p><p>Step 3. Checks if the returned value from the checkSafety function is equal to 1.</p></p>
<p><b>Expected results:</b><p>Step 1. The variables of the safety sensors status are saved with their detailed values.</p><p>Step 2. The checkSafety() function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkSafety function is equal to 1.</p></p>

### [TCS013] Check Safety (True 13)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the hood_sensor_status and the seatbelt_sensor_status variables with the 1 value and 0 for the remaining safety sensors status variables (trunk_sensor_status, door_sensor_status).</p><p>Step 2. Insert a call to the function checkSafety().</p><p>Step 3. Checks if the returned value from the checkSafety function is equal to 1.</p></p>
<p><b>Expected results:</b><p>Step 1. The variables of the safety sensors status are saved with their detailed values.</p><p>Step 2. The checkSafety() function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkSafety function is equal to 1.</p></p>

### [TCS014] Check Safety (True 14)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the hood_sensor_status variable with the 1 value and 0 for the remaining safety sensors status variables (trunk_sensor_status, door_sensor_status, seatbelt_sensor_status).</p><p>Step 2. Insert a call to the function checkSafety().</p><p>Step 3. Checks if the returned value from the checkSafety function is equal to 1.</p></p>
<p><b>Expected results:</b><p>Step 1. The variables of the safety sensors status are saved with their detailed values.</p><p>Step 2. The checkSafety() function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkSafety function is equal to 1.</p></p>

### [TCS015] Check Safety (False)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the safety sensors status variables (hood_sensor_status, trunk_sensor_status, door_sensor_status, seatbelt_sensor_status) with the 0 value.</p><p>Step 2. Insert a call to the function checkSafety().</p><p>Step 3. Checks if the returned value from the checkSafety function is equal to 0.</p></p>
<p><b>Expected results:</b><p>Step 1. The variables of the safety sensors status are saved with the 0 value.</p><p>Step 2. The checkSafety() function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkSafety function is equal to 0.</p></p>

## Warnings Test Suite
### [TCW001] Status Check (True)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p><p>Declared sr_status variable of type unsigned char.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the sr_status variable with the 1 value.</p><p>Step 2. Insert a call to the function statusWarning() passing the sr_status variable as a paramater.</p><p>Step 3. Checks if the returned value from the statusWarning function is equal to 1.</p></p>
<p><b>Expected results:</b><p>Step 1. The warning status is saved on the sr_status variable.</p><p>Step 2. The statusWarning() function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the statusWarning function is equal to 1.</p></p>

### [TCW002] Status Check (False)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p><p>Declared sr_status variable of type unsigned char.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the sr_status variable with the 0 value.</p><p>Step 2. Insert a call to the function statusWarning() passing the sr_status variable as a paramater.</p><p>Step 3. Checks if the returned value from the statusWarning function is equal to 0.</p></p>
<p><b>Expected results:</b><p>Step 1. The warning status is saved on the sr_status variable.</p><p>Step 2. The statusWarning() function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the statusWarning function is equal to 0.</p></p>

### [TCW003] Broken Check (True)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p><p>Declared sr_state variable of type unsigned char.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the sr_state variable with the 1 value.</p><p>Step 2. Insert a call to the function brokenWarning() passing the sr_state variable as a paramater.</p><p>Step 3. Checks if the returned value from the statusWarning function is equal to 1.</p></p>
<p><b>Expected results:</b><p>Step 1. The warning status is saved on the sr_status variable.</p><p>Step 2. The brokenWarning() function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the statusWarning function is equal to 1.</p></p>

### [TCW004] Broken Check (False)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p><p>Declared sr_state variable of type unsigned char.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the sr_state variable with the 0 value.</p><p>Step 2. Insert a call to the function brokenWarning() passing the sr_state variable as a paramater.</p><p>Step 3. Checks if the returned value from the statusWarning function is equal to 0.</p></p>
<p><b>Expected results:</b><p>Step 1. The warning status is saved on the sr_status variable.</p><p>Step 2. The brokenWarning() function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the statusWarning function is equal to 0.</p></p>

## Wellbeing Test Suite
### [TCWB001] Check Air Conditioner (False)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p><p>Declared soc variable of type float.</p><p>Declared air_spd variable of type unsigned char.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the air_spd variable with the 3 value and the soc variable with the 0.5 value.</p><p>Step 2. Insert a call to the function checkAirCond() passing the air_spd and soc variables, respectively, as paramaters.</p><p>Step 3. Checks if the returned value from the checkAirCond function is equal to 0.</p></p>
<p><b>Expected results:</b><p>Step 1. The air speed is saved on the air_spd variable and the state of charge is saved on the soc variable.</p><p>Step 2. The checkAirCond() function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkAirCond function is equal to 0.</p></p>

### [TCWB002] Check Air Conditioner (True)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p><p>Declared soc variable of type float.</p><p>Declared air_spd variable of type unsigned char.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the air_spd variable with the 1 value and the soc variable with the 0.5 value.</p><p>Step 2. Insert a call to the function checkAirCond() passing the air_spd and soc variables, respectively, as paramaters.</p><p>Step 3. Checks if the returned value from the checkAirCond function is equal to 1.</p></p>
<p><b>Expected results:</b><p>Step 1. The air speed is saved on the air_spd variable and the state of charge is saved on the soc variable.</p><p>Step 2. The checkAirCond() function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkAirCond function is equal to 1.</p></p>

### [TCWB003] Check Air Conditioner (True 2)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p><p>Declared soc variable of type float.</p><p>Declared air_spd variable of type unsigned char.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the air_spd variable with the 3 value and the soc variable with the 0.9 value.</p><p>Step 2. Insert a call to the function checkAirCond() passing the air_spd and soc variables, respectively, as paramaters.</p><p>Step 3. Checks if the returned value from the checkAirCond function is equal to 1.</p></p>
<p><b>Expected results:</b><p>Step 1. The air speed is saved on the air_spd variable and the state of charge is saved on the soc variable.</p><p>Step 2. The checkAirCond() function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkAirCond function is equal to 1.</p></p>

### [TCWB004] Check Air Conditioner (True 3)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p><p>Declared soc variable of type float.</p><p>Declared air_spd variable of type unsigned char.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the air_spd variable with the 1 value and the soc variable with the 0.9 value.</p><p>Step 2. Insert a call to the function checkAirCond() passing the air_spd and soc variables, respectively, as paramaters.</p><p>Step 3. Checks if the returned value from the checkAirCond function is equal to 1.</p></p>
<p><b>Expected results:</b><p>Step 1. The air speed is saved on the air_spd variable and the state of charge is saved on the soc variable.</p><p>Step 2. The checkAirCond() function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkAirCond function is equal to 1.</p></p>

### [TCWB005] Check Wellbeing (False)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p><p>Declared soc variable of type float.</p><p>Declared air_spd variable of type unsigned char.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the air_spd variable with the 3 value and the soc variable with the 0.5 value.</p><p>Step 2. Insert a call to the function checkWellbeing() passing the air_spd and soc variables, respectively, as paramaters.</p><p>Step 3. Checks if the returned value from the checkAirCond function is equal to 0.</p></p>
<p><b>Expected results:</b><p>Step 1. The air speed is saved on the air_spd variable and the state of charge is saved on the soc variable.</p><p>Step 2. The checkWellbeing() function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkWellbeing function is equal to 0.</p></p>

### [TCWB006] Check Wellbeing (True)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p><p>Declared soc variable of type float.</p><p>Declared air_spd variable of type unsigned char.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the air_spd variable with the 1 value and the soc variable with the 0.5 value.</p><p>Step 2. Insert a call to the function checkWellbeing() passing the air_spd and soc variables, respectively, as paramaters.</p><p>Step 3. Checks if the returned value from the checkAirCond function is equal to 1.</p></p>
<p><b>Expected results:</b><p>Step 1. The air speed is saved on the air_spd variable and the state of charge is saved on the soc variable.</p><p>Step 2. The checkWellbeing() function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkWellbeing function is equal to 1.</p></p>

### [TCWB007] Check Wellbeing (True 2)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p><p>Declared soc variable of type float.</p><p>Declared air_spd variable of type unsigned char.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the air_spd variable with the 3 value and the soc variable with the 0.9 value.</p><p>Step 2. Insert a call to the function checkWellbeing() passing the air_spd and soc variables, respectively, as paramaters.</p><p>Step 3. Checks if the returned value from the checkAirCond function is equal to 1.</p></p>
<p><b>Expected results:</b><p>Step 1. The air speed is saved on the air_spd variable and the state of charge is saved on the soc variable.</p><p>Step 2. The checkWellbeing() function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkWellbeing function is equal to 1.</p></p>

### [TCWB008] Check Wellbeing (True 3)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p><p>Declared soc variable of type float.</p><p>Declared air_spd variable of type unsigned char.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the air_spd variable with the 1 value and the soc variable with the 0.9 value.</p><p>Step 2. Insert a call to the function checkWellbeing() passing the air_spd and soc variables, respectively, as paramaters.</p><p>Step 3. Checks if the returned value from the checkAirCond function is equal to 1.</p></p>
<p><b>Expected results:</b><p>Step 1. The air speed is saved on the air_spd variable and the state of charge is saved on the soc variable.</p><p>Step 2. The checkWellbeing() function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkWellbeing function is equal to 1.</p></p>
