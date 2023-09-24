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
### [TCD001] Check Speed (True)
<p><b>Pre-Conditions:</b></p>
<p>Configured C environment with the Unity test framework.</p>
<p>Declared test_speed variable of type float.</p>
<p><b>Steps:</b></p>
<p>Step 1. Assign the value of 2.123 to the test_speed variable.</p>
<p>Step 2. Insert a call to the function checkSpeed().</p>
<p>Step 3. Checks if the returned value from the checkSpeed function is equals to 1.</p>
<p><b>Expected results:</b></p>
<p>Step 1. The value is saved on the test_speed variable.</p>
<p>Step 2. The checkSpeed function is called with no problems.</p>
<p>Step 3. The test passes due to the returned value by the checkSpeed function being equals to 1.</p>

### [TCD002] Check Speed (False)
<p><b>Pre-Conditions:</b></p>
<p>Configured C environment with the Unity test framework.</p>
<p>Declared test_speed variable of type float.</p>
<p><b>Steps:</b></p>
<p>Step 1. Assign the value of 6.123 to the test_speed variable.</p>
<p>Step 2. Insert a call to the function CheckSpeed().</p>
<p>Step 3. Checks if the returned value from the CheckSpeed function is equals to 0.</p>
<p><b>Expected results:</b></p>
<p>Step 1. The value is saved on the test_speed variable.</p>
<p>Step 2. The CheckSpeed function is called with no problems.</p>
<p>Step 3. The test passes due to the returned value by the CheckSpeed function being equals to 0.</p>

### [TCD003] Check Brake (True 1)
<p><b>Pre-Conditions:</b></p>
<p>Configured C environment with the Unity test framework.</p>
<p>Declared test_is_braking variable of type uint8_t.</p>
<p>Declared test_time variable of type uint16_t.</p>
<p><b>Steps:</b></p>
<p>Step 1. Initialize the test_time variable with the 0 value.</p>
<p>Step 2. Insert a call to the function checkBrake() passing the t parameter and the test_time respectively.</p>
<p>Step 3. Checks if the returned value from the checkBrake function is equals to 0.</p>
<p><b>Expected results:</b></p>
<p>Step 1. The initialized time value is saved on the test_time variable.</p>
<p>Step 2. The CheckBrake function is called with no problems.</p>
<p>Step 3. The test passes due to the returned value by the checkBrake function being equals to 0.</p>

### [TCD004] Check Brake (True 2)
<p><b>Pre-Conditions:</b></p>
<p>Configured C environment with the Unity test framework.</p>
<p>Declared test_is_braking variable of type uint8_t.</p>
<p>Declared test_time variable of type uint16_t.</p>
<p><b>Steps:</b></p>
<p>Step 1. Initialize the test_time variable with the 10 value.</p>
<p>Step 2. Insert a call to the function checkBrake() passing the t parameter and the test_time respectively.</p>
<p>Step 3. Checks if the returned value from the checkBrake function is equals to 0.</p>
<p><b>Expected results:</b></p>
<p>Step 1. The initialized time value is saved on the test_time variable.</p>
<p>Step 2. The CheckBrake function is called with no problems.</p>
<p>Step 3. The test passes due to the returned value by the checkBrake function being equals to 0.</p>

### [TCD005] Check Brake (False 1)
<p><b>Pre-Conditions:</b></p>
<p>Configured C environment with the Unity test framework.</p>
<p>Declared test_is_braking variable of type uint8_t.</p>
<p>Declared test_time variable of type uint16_t.</p>
<p><b>Steps:</b></p>
<p>Step 1. Initialize the test_time variable with the 0 value.</p>
<p>Step 2. Insert a call to the function checkBrake() passing the f parameter and the test_time respectively.</p>
<p>Step 3. Checks if the returned value from the checkBrake function is equals to 0.</p>
<p><b>Expected results:</b></p>
<p>Step 1. The initialized time value is saved on the test_time variable.</p>
<p>Step 2. The CheckBrake function is called with no problems.</p>
<p>Step 3. The test passes due to the returned value by the checkBrake function being equals to 0.</p>

### [TCD006] Check Brake (False 2)
<p><b>Pre-Conditions:</b></p>
<p>Configured C environment with the Unity test framework.</p>
<p>Declared test_is_braking variable of type uint8_t.</p>
<p>Declared test_time variable of type uint16_t.</p>
<p><b>Steps:</b></p>
<p>Step 1. Initialize the test_time variable with the 10 value.</p>
<p>Step 2. Insert a call to the function checkBrake() passing the f parameter and the test_time respectively.</p>
<p>Step 3. Checks if the returned value from the checkBrake function is equals to 0.</p>
<p><b>Expected results:</b></p>
<p>Step 1. The initialized time value is saved on the test_time variable.</p>
<p>Step 2. The CheckBrake function is called with no problems.</p>
<p>Step 3. The test passes due to the returned value by the checkBrake function being equals to 0.</p>
  
## Hardware Test Suite
### [TCH001] Check Hardware (True 1)
<p><b>Pre-Conditions:</b></p>
<p>Configured C environment with the Unity test framework.</p>
<p><b>Steps:</b></p>
<p>Step 1. Initialize all the sensor status variables as following:</p>
<ul>
<li>test_start_stop_sensor_status = 1</li>
<li>test_speed_sensor_status = 1</li>
<li>test_brake_sensor_status = 1</li>
<li>test_engine_temp_sensor_status = 1</li>
<li>test_battery_sensor_status = 1</li>
<li>test_hood_sensor_status = 1</li>
<li>test_trunk_sensor_status = 1</li>
<li>test_door_sensor_status = 1</li>
<li>test_seatbelt_sensor_status = 1</li>
<li>test_air_cond_sensor_status = 1</li>
</ul>
<p>Step 2. Insert a call to the function checkHardware().</p>
<p>Step 3. Checks if the returned value from the checkHardware function is equals to 1.</p>
<p><b>Expected results:</b></p>
<p>Step 1. The sensor status variables are stored with the value 1.</p>
<p>Step 2. The CheckHardware function is called with no problems.</p>
<p>Step 3. The test passes due to the returned value by the checkHardware function is equal to 1.</p>

### [TCH002] Check Hardware (True 2)
<p><b>Pre-Conditions:</b></p>
<p>Configured C environment with the Unity test framework.</p>
<p><b>Steps:</b></p>
<p>Step 1. Initialize all the sensor status variables as following:</p>
<ul>
<li>test_start_stop_sensor_status = 1</li>
<li>test_speed_sensor_status = 1</li>
<li>test_brake_sensor_status = 1</li>
<li>test_engine_temp_sensor_status = 1</li>
<li>test_battery_sensor_status = 1</li>
<li>test_hood_sensor_status = 1</li>
<li>test_trunk_sensor_status = 0</li>
<li>test_door_sensor_status = 0</li>
<li>test_seatbelt_sensor_status = 0</li>
<li>test_air_cond_sensor_status = 0</li>
</ul>
<p>Step 2. Insert a call to the function checkHardware().</p>
<p>Step 3. Checks if the returned value from the checkHardware function is equals to 1.</p>
<p><b>Expected results:</b></p>
<p>Step 1. The sensor status variables are stored with their respective initialized values.</p>
<p>Step 2. The CheckHardware function is called with no problems.</p>
<p>Step 3. The test passes due to the returned value by the checkHardware function is equal to 1.</p>
  
### [TCH003] Check Hardware (True 3)
<p><b>Pre-Conditions:</b></p>
<p>Configured C environment with the Unity test framework.</p>
<p><b>Steps:</b></p>
<p>Step 1. Initialize all the sensor status variables as following:</p>
<ul>
<li>test_start_stop_sensor_status = 1</li>
<li>test_speed_sensor_status = 1</li>
<li>test_brake_sensor_status = 1</li>
<li>test_engine_temp_sensor_status = 1</li>
<li>test_battery_sensor_status = 1</li>
<li>test_hood_sensor_status = 0</li>
<li>test_trunk_sensor_status = 1</li>
<li>test_door_sensor_status = 0</li>
<li>test_seatbelt_sensor_status = 0</li>
<li>test_air_cond_sensor_status = 0</li>
</ul>
<p>Step 2. Insert a call to the function checkHardware().</p>
<p>Step 3. Checks if the returned value from the checkHardware function is equals to 1.</p>
<p><b>Expected results:</b></p>
<p>Step 1. The sensor status variables are stored with their respective initialized values.</p>
<p>Step 2. The CheckHardware function is called with no problems.</p>
<p>Step 3. The test passes due to the returned value by the checkHardware function is equal to 1.</p>
  
### [TCH004] Check Hardware (True 4)
<p><b>Pre-Conditions:</b></p>
<p>Configured C environment with the Unity test framework.</p>
<p><b>Steps:</b></p>
<p>Step 1. Initialize all the sensor status variables as following:</p>
<ul>
<li>test_start_stop_sensor_status = 1</li>
<li>test_speed_sensor_status = 1</li>
<li>test_brake_sensor_status = 1</li>
<li>test_engine_temp_sensor_status = 1</li>
<li>test_battery_sensor_status = 1</li>
<li>test_hood_sensor_status = 0</li>
<li>test_trunk_sensor_status = 0</li>
<li>test_door_sensor_status = 1</li>
<li>test_seatbelt_sensor_status = 0</li>
<li>test_air_cond_sensor_status = 0</li>
</ul>
<p>Step 2. Insert a call to the function checkHardware().</p>
<p>Step 3. Checks if the returned value from the checkHardware function is equals to 1.</p>
<p><b>Expected results:</b></p>
<p>Step 1. The sensor status variables are stored with their respective initialized values.</p>
<p>Step 2. The CheckHardware function is called with no problems.</p>
<p>Step 3. The test passes due to the returned value by the checkHardware function is equal to 1.</p>
  
### [TCH005] Check Hardware (True 5)
<p><b>Pre-Conditions:</b></p>
<p>Configured C environment with the Unity test framework.</p>
<p><b>Steps:</b></p>
<p>Step 1. Initialize all the sensor status variables as following:</p>
<ul>
<li>test_start_stop_sensor_status = 1</li>
<li>test_speed_sensor_status = 1</li>
<li>test_brake_sensor_status = 1</li>
<li>test_engine_temp_sensor_status = 1</li>
<li>test_battery_sensor_status = 1</li>
<li>test_hood_sensor_status = 0</li>
<li>test_trunk_sensor_status = 0</li>
<li>test_door_sensor_status = 0</li>
<li>test_seatbelt_sensor_status = 1</li>
<li>test_air_cond_sensor_status = 0</li>
</ul>
<p>Step 2. Insert a call to the function checkHardware().</p>
<p>Step 3. Checks if the returned value from the checkHardware function is equals to 1.</p>
<p><b>Expected results:</b></p>
<p>Step 1. The sensor status variables are stored with their respective initialized values.</p>
<p>Step 2. The CheckHardware function is called with no problems.</p>
<p>Step 3. The test passes due to the returned value by the checkHardware function is equal to 1.</p>
  
### [TCH006] Check Hardware (True 6)
<p><b>Pre-Conditions:</b></p>
<p>Configured C environment with the Unity test framework.</p>
<p><b>Steps:</b></p>
<p>Step 1. Initialize all the sensor status variables as following:</p>
<ul>
<li>test_start_stop_sensor_status = 1</li>
<li>test_speed_sensor_status = 1</li>
<li>test_brake_sensor_status = 1</li>
<li>test_engine_temp_sensor_status = 1</li>
<li>test_battery_sensor_status = 1</li>
<li>test_hood_sensor_status = 0</li>
<li>test_trunk_sensor_status = 0</li>
<li>test_door_sensor_status = 0</li>
<li>test_seatbelt_sensor_status = 0</li>
<li>test_air_cond_sensor_status = 1</li>
</ul>
<p>Step 2. Insert a call to the function checkHardware().</p>
<p>Step 3. Checks if the returned value from the checkHardware function is equals to 1.</p>
<p><b>Expected results:</b></p>
<p>Step 1. The sensor status variables are stored with their respective initialized values.</p>
<p>Step 2. The CheckHardware function is called with no problems.</p>
<p>Step 3. The test passes due to the returned value by the checkHardware function is equal to 1.</p>
  
### [TCH07] Check Hardware (False 1)
<p><b>Pre-Conditions:</b></p>
<p>Configured C environment with the Unity test framework.</p>
<p><b>Steps:</b></p>
<p>Step 1. Initialize all the sensor status variables as following:</p>
<ul>
<li>test_start_stop_sensor_status = 0</li>
<li>test_speed_sensor_status = 1</li>
<li>test_brake_sensor_status = 1</li>
<li>test_engine_temp_sensor_status = 1</li>
<li>test_battery_sensor_status = 1</li>
<li>test_hood_sensor_status = 1</li>
<li>test_trunk_sensor_status = 1</li>
<li>test_door_sensor_status = 1</li>
<li>test_seatbelt_sensor_status = 1</li>
<li>test_air_cond_sensor_status = 1</li>
</ul>
<p>Step 2. Insert a call to the function checkHardware().</p>
<p>Step 3. Checks if the returned value from the checkHardware function is equals to 0.</p>
<p><b>Expected results:</b></p>
<p>Step 1. The sensor status variables are stored with their respective initialized values.</p>
<p>Step 2. The CheckHardware function is called with no problems.</p>
<p>Step 3. The test passes due to the returned value by the checkHardware function is equal to 0.</p>
  
### [TCH08] Check Hardware (False 2)
<p><b>Pre-Conditions:</b></p>
<p>Configured C environment with the Unity test framework.</p>
<p><b>Steps:</b></p>
<p>Step 1. Initialize all the sensor status variables as following:</p>
<ul>
<li>test_start_stop_sensor_status = 1</li>
<li>test_speed_sensor_status = 0</li>
<li>test_brake_sensor_status = 1</li>
<li>test_engine_temp_sensor_status = 1</li>
<li>test_battery_sensor_status = 1</li>
<li>test_hood_sensor_status = 1</li>
<li>test_trunk_sensor_status = 1</li>
<li>test_door_sensor_status = 1</li>
<li>test_seatbelt_sensor_status = 1</li>
<li>test_air_cond_sensor_status = 1</li>
</ul>
<p>Step 2. Insert a call to the function checkHardware().</p>
<p>Step 3. Checks if the returned value from the checkHardware function is equals to 0.</p>
<p><b>Expected results:</b></p>
<p>Step 1. The sensor status variables are stored with their respective initialized values.</p>
<p>Step 2. The CheckHardware function is called with no problems.</p>
<p>Step 3. The test passes due to the returned value by the checkHardware function is equal to 0.</p>
  
### [TCH09] Check Hardware (False 3)
<p><b>Pre-Conditions:</b></p>
<p>Configured C environment with the Unity test framework.</p>
<p><b>Steps:</b></p>
<p>Step 1. Initialize all the sensor status variables as following:</p>
<ul>
<li>test_start_stop_sensor_status = 1</li>
<li>test_speed_sensor_status = 1</li>
<li>test_brake_sensor_status = 0</li>
<li>test_engine_temp_sensor_status = 1</li>
<li>test_battery_sensor_status = 1</li>
<li>test_hood_sensor_status = 1</li>
<li>test_trunk_sensor_status = 1</li>
<li>test_door_sensor_status = 1</li>
<li>test_seatbelt_sensor_status = 1</li>
<li>test_air_cond_sensor_status = 1</li>
</ul>
<p>Step 2. Insert a call to the function checkHardware().</p>
<p>Step 3. Checks if the returned value from the checkHardware function is equals to 0.</p>
<p><b>Expected results:</b></p>
<p>Step 1. The sensor status variables are stored with their respective initialized values.</p>
<p>Step 2. The CheckHardware function is called with no problems.</p>
<p>Step 3. The test passes due to the returned value by the checkHardware function is equal to 0.</p>

### [TCH010] Check Hardware (False 4)
<p><b>Pre-Conditions:</b></p>
<p>Configured C environment with the Unity test framework.</p>
<p><b>Steps:</b></p>
<p>Step 1. Initialize all the sensor status variables as following:</p>
<ul>
<li>test_start_stop_sensor_status = 1</li>
<li>test_speed_sensor_status = 1</li>
<li>test_brake_sensor_status = 1</li>
<li>test_engine_temp_sensor_status = 0</li>
<li>test_battery_sensor_status = 1</li>
<li>test_hood_sensor_status = 1</li>
<li>test_trunk_sensor_status = 1</li>
<li>test_door_sensor_status = 1</li>
<li>test_seatbelt_sensor_status = 1</li>
<li>test_air_cond_sensor_status = 1</li>
</ul>
<p>Step 2. Insert a call to the function checkHardware().</p>
<p>Step 3. Checks if the returned value from the checkHardware function is equals to 0.</p>
<p><b>Expected results:</b></p>
<p>Step 1. The sensor status variables are stored with their respective initialized values.</p>
<p>Step 2. The CheckHardware function is called with no problems.</p>
<p>Step 3. The test passes due to the returned value by the checkHardware function is equal to 0.</p>
  
### [TCH011] Check Hardware (False 5)
<p><b>Pre-Conditions:</b></p>
<p>Configured C environment with the Unity test framework.</p>
<p><b>Steps:</b></p>
<p>Step 1. Initialize all the sensor status variables as following:</p>
<ul>
<li>test_start_stop_sensor_status = 1</li>
<li>test_speed_sensor_status = 1</li>
<li>test_brake_sensor_status = 1</li>
<li>test_engine_temp_sensor_status = 1</li>
<li>test_battery_sensor_status = 0</li>
<li>test_hood_sensor_status = 1</li>
<li>test_trunk_sensor_status = 1</li>
<li>test_door_sensor_status = 1</li>
<li>test_seatbelt_sensor_status = 1</li>
<li>test_air_cond_sensor_status = 1</li>
</ul>
<p>Step 2. Insert a call to the function checkHardware().</p>
<p>Step 3. Checks if the returned value from the checkHardware function is equals to 0.</p>
<p><b>Expected results:</b></p>
<p>Step 1. The sensor status variables are stored with their respective initialized values.</p>
<p>Step 2. The CheckHardware function is called with no problems.</p>
<p>Step 3. The test passes due to the returned value by the checkHardware function is equal to 0.</p>
  
### [TCH012] Check Hardware (False 6)
<p><b>Pre-Conditions:</b></p>
<p>Configured C environment with the Unity test framework.</p>
<p><b>Steps:</b></p>
<p>Step 1. Initialize all the sensor status variables as following:</p>
<ul>
<li>test_start_stop_sensor_status = 1</li>
<li>test_speed_sensor_status = 1</li>
<li>test_brake_sensor_status = 1</li>
<li>test_engine_temp_sensor_status = 1</li>
<li>test_battery_sensor_status = 1</li>
<li>test_hood_sensor_status = 0</li>
<li>test_trunk_sensor_status = 0</li>
<li>test_door_sensor_status = 0</li>
<li>test_seatbelt_sensor_status = 0</li>
<li>test_air_cond_sensor_status = 0</li>
</ul>
<p>Step 2. Insert a call to the function checkHardware().</p>
<p>Step 3. Checks if the returned value from the checkHardware function is equals to 0.</p>
<p><b>Expected results:</b></p>
<p>Step 1. The sensor status variables are stored with their respective initialized values.</p>
<p>Step 2. The CheckHardware function is called with no problems.</p>
<p>Step 3. The test passes due to the returned value by the checkHardware function is equal to 0.</p>

### [TCH013] Check Hardware (False 7)
<p><b>Pre-Conditions:</b></p>
<p>Configured C environment with the Unity test framework.</p>
<p><b>Steps:</b></p>
<p>Step 1. Initialize all the sensor status variables as following:</p>
<ul>
<li>test_start_stop_sensor_status = 0</li>
<li>test_speed_sensor_status = 0</li>
<li>test_brake_sensor_status = 0</li>
<li>test_engine_temp_sensor_status = 0</li>
<li>test_battery_sensor_status = 0</li>
<li>test_hood_sensor_status = 1</li>
<li>test_trunk_sensor_status = 1</li>
<li>test_door_sensor_status = 1</li>
<li>test_seatbelt_sensor_status = 1</li>
<li>test_air_cond_sensor_status = 1</li>
</ul>
<p>Step 2. Insert a call to the function checkHardware().</p>
<p>Step 3. Checks if the returned value from the checkHardware function is equals to 0.</p>
<p><b>Expected results:</b></p>
<p>Step 1. The sensor status variables are stored with their respective initialized values.</p>
<p>Step 2. The CheckHardware function is called with no problems.</p>
<p>Step 3. The test passes due to the returned value by the checkHardware function is equal to 0.</p>

## Power Test Suite
### [TCP001] Check Engine Temperature (True)
<p><b>Pre-Conditions:</b></p>
<p>Configured C environment with the Unity test framework.</p>
<p>Declared test_fc_tmp variable of type float.</p>
<p><b>Steps:</b></p>
<p>Step 1. Assign the value of 100 to the test_fc_tmp variable.</p>
<p>Step 2. Insert a call to the function checkEngineTemp() passing the test_fc_tmp variable as a parameter.</p>
<p>Step 3. Checks if the returned value from the checkEngineTemp function is equal to 1.</p>
<p><b>Expected results:</b></p>
<p>Step 1. The engine temperature value is saved on the test_fc_tmp variable.</p>
<p>Step 2. The checkEngineTemp function is called with no problems.</p>
<p>Step 3. The test passes due to the returned value by the checkEngineTemp function is equal to 1.</p>

### [TCP002] Check Engine Temperature (False)
<p><b>Pre-Conditions:</b></p>
<p>Configured C environment with the Unity test framework.</p>
<p>Declared test_fc_tmp variable of type float.</p>
<p><b>Steps:</b></p>
<p>Step 1. Assign the value of 50 to the test_fc_tmp variable.</p>
<p>Step 2. Insert a call to the function checkEngineTemp() passing the test_fc_tmp variable as a parameter.</p>
<p>Step 3. Checks if the returned value from the checkEngineTemp function is equal to 0.</p>
<p><b>Expected results:</b></p>
<p>Step 1. The engine temperature value is saved on the test_fc_tmp variable.</p>
<p>Step 2. The checkEngineTemp function is called with no problems.</p>
<p>Step 3. The test passes due to the returned value by the checkEngineTemp function is equal to 0.</p>

### [TCP003] Check Battery (True)
<p><b>Pre-Conditions:</b></p>
<p>Configured C environment with the Unity test framework.</p>
<p>Declared test_SOC variable of type float.</p>
<p><b>Steps:</b></p>
<p>Step 1. Assign the value of 0.7 to the test_SOC variable.</p>
<p>Step 2. Insert a call to the function checkBattery() passing the test_SOC variable as a parameter.</p>
<p>Step 3. Checks if the returned value from the checkBattery function is equal to 1.</p>
<p><b>Expected results:</b></p>
<p>Step 1. The state of charge value is saved on the test_SOC variable.</p>
<p>Step 2. The checkBattery function is called with no problems.</p>
<p>Step 3. The test passes due to the returned value by the checkBattery function is equal to 1.</p>

### [TCP004] Check Battery (False)
<p><b>Pre-Conditions:</b></p>
<p>Configured C environment with the Unity test framework.</p>
<p>Declared test_SOC variable of type float.</p>
<p><b>Steps:</b></p>
<p>Step 1. Assign the value of 0.3 to the test_SOC variable.</p>
<p>Step 2. Insert a call to the function checkBattery() passing the test_SOC variable as a parameter.</p>
<p>Step 3. Checks if the returned value from the checkBattery function is equal to 0.</p>
<p><b>Expected results:</b></p>
<p>Step 1. The state of charge value is saved on the test_SOC variable.</p>
<p>Step 2. The checkBattery function is called with no problems.</p>
<p>Step 3. The test passes due to the returned value by the checkBattery function is equal to 0.</p>

## Safety Test Suite
### [TCS001] Check Safety (True 1)
<p><b>Pre-Conditions:</b></p>
<p>Configured C environment with the Unity test framework.</p>
<p><b>Steps:</b></p>
<p>Step 1. Initialize the safety sensors variables as following:</p>
<ul>
<li>test_hood_sensor_value = 1</li>
<li>test_trunk_sensor_value = 1</li>
<li>test_door_sensor_value = 1</li>
<li>test_seatbelt_sensor_value = 1</li>
</ul>
<p>Step 2. Insert a call to the function checkSafety().</p>
<p>Step 3. Checks if the returned value from the checkSafety function is equal to 1.</p>
<p><b>Expected results:</b></p>
<p>Step 1. The variables of the safety sensors are saved with the 1 value.</p>
<p>Step 2. The checkSafety() function is called with no problems.</p>
<p>Step 3. The test passes due to the returned value by the checkSafety function is equal to 1.</p>

### [TCS002] Check Safety (True 2)
<p><b>Pre-Conditions:</b></p>
<p>Configured C environment with the Unity test framework.</p>
<p><b>Steps:</b></p>
<p>Step 1. Initialize the safety sensors variables as following:</p>
<ul>
<li>test_hood_sensor_value = 1</li>
<li>test_trunk_sensor_value = 1</li>
<li>test_door_sensor_value = 1</li>
<li>test_seatbelt_sensor_value = 0</li>
</ul>
<p>Step 2. Insert a call to the function checkSafety().</p>
<p>Step 3. Checks if the returned value from the checkSafety function is equal to 1.</p>
<p><b>Expected results:</b></p>
<p>Step 1. The variables of the safety sensors are saved with their detailed values.</p>
<p>Step 2. The checkSafety() function is called with no problems.</p>
<p>Step 3. The test passes due to the returned value by the checkSafety function is equal to 1.</p>

### [TCS003] Check Safety (True 3)
<p><b>Pre-Conditions:</b></p>
<p>Configured C environment with the Unity test framework.</p>
<p><b>Steps:</b></p>
<p>Step 1. Initialize the safety sensors variables as following:</p>
<ul>
<li>test_hood_sensor_value = 1</li>
<li>test_trunk_sensor_value = 1</li>
<li>test_door_sensor_value = 0</li>
<li>test_seatbelt_sensor_value = 1</li>
</ul>
<p>Step 2. Insert a call to the function checkSafety().</p>
<p>Step 3. Checks if the returned value from the checkSafety function is equal to 1.</p>
<p><b>Expected results:</b></p>
<p>Step 1. The variables of the safety sensors are saved with their detailed values.</p>
<p>Step 2. The checkSafety() function is called with no problems.</p>
<p>Step 3. The test passes due to the returned value by the checkSafety function is equal to 1.</p>

### [TCS004] Check Safety (True 4)
<p><b>Pre-Conditions:</b></p>
<p>Configured C environment with the Unity test framework.</p>
<p><b>Steps:</b></p>
<p>Step 1. Initialize the safety sensors variables as following:</p>
<ul>
<li>test_hood_sensor_value = 1</li>
<li>test_trunk_sensor_value = 1</li>
<li>test_door_sensor_value = 0</li>
<li>test_seatbelt_sensor_value = 0</li>
</ul>
<p>Step 2. Insert a call to the function checkSafety().</p>
<p>Step 3. Checks if the returned value from the checkSafety function is equal to 1.</p>
<p><b>Expected results:</b></p>
<p>Step 1. The variables of the safety sensors are saved with their detailed values.</p>
<p>Step 2. The checkSafety() function is called with no problems.</p>
<p>Step 3. The test passes due to the returned value by the checkSafety function is equal to 1.</p>

### [TCS005] Check Safety (True 5)
<p><b>Pre-Conditions:</b></p>
<p>Configured C environment with the Unity test framework.</p>
<p><b>Steps:</b></p>
<p>Step 1. Initialize the safety sensors variables as following:</p>
<ul>
<li>test_hood_sensor_value = 1</li>
<li>test_trunk_sensor_value = 0</li>
<li>test_door_sensor_value = 1</li>
<li>test_seatbelt_sensor_value = 1</li>
</ul>
<p>Step 2. Insert a call to the function checkSafety().</p>
<p>Step 3. Checks if the returned value from the checkSafety function is equal to 1.</p>
<p><b>Expected results:</b></p>
<p>Step 1. The variables of the safety sensors are saved with their detailed values.</p>
<p>Step 2. The checkSafety() function is called with no problems.</p>
<p>Step 3. The test passes due to the returned value by the checkSafety function is equal to 1.</p>

### [TCS006] Check Safety (True 6)
<p><b>Pre-Conditions:</b></p>
<p>Configured C environment with the Unity test framework.</p>
<p><b>Steps:</b></p>
<p>Step 1. Initialize the safety sensors variables as following:</p>
<ul>
<li>test_hood_sensor_value = 1</li>
<li>test_trunk_sensor_value = 0</li>
<li>test_door_sensor_value = 1</li>
<li>test_seatbelt_sensor_value = 0</li>
</ul>
<p>Step 2. Insert a call to the function checkSafety().</p>
<p>Step 3. Checks if the returned value from the checkSafety function is equal to 1.</p>
<p><b>Expected results:</b></p>
<p>Step 1. The variables of the safety sensors are saved with their detailed values.</p>
<p>Step 2. The checkSafety() function is called with no problems.</p>
<p>Step 3. The test passes due to the returned value by the checkSafety function is equal to 1.</p>

### [TCS007] Check Safety (True 7)
<p><b>Pre-Conditions:</b></p>
<p>Configured C environment with the Unity test framework.</p>
<p><b>Steps:</b></p>
<p>Step 1. Initialize the safety sensors variables as following:</p>
<ul>
<li>test_hood_sensor_value = 1</li>
<li>test_trunk_sensor_value = 0</li>
<li>test_door_sensor_value = 0</li>
<li>test_seatbelt_sensor_value = 1</li>
</ul>
<p>Step 2. Insert a call to the function checkSafety().</p>
<p>Step 3. Checks if the returned value from the checkSafety function is equal to 1.</p>
<p><b>Expected results:</b></p>
<p>Step 1. The variables of the safety sensors are saved with their detailed values.</p>
<p>Step 2. The checkSafety() function is called with no problems.</p>
<p>Step 3. The test passes due to the returned value by the checkSafety function is equal to 1.</p>

### [TCS008] Check Safety (True 8)
<p><b>Pre-Conditions:</b></p>
<p>Configured C environment with the Unity test framework.</p>
<p><b>Steps:</b></p>
<p>Step 1. Initialize the safety sensors variables as following:</p>
<ul>
<li>test_hood_sensor_value = 1</li>
<li>test_trunk_sensor_value = 0</li>
<li>test_door_sensor_value = 0</li>
<li>test_seatbelt_sensor_value = 0</li>
</ul>
<p>Step 2. Insert a call to the function checkSafety().</p>
<p>Step 3. Checks if the returned value from the checkSafety function is equal to 1.</p>
<p><b>Expected results:</b></p>
<p>Step 1. The variables of the safety sensors are saved with their detailed values.</p>
<p>Step 2. The checkSafety() function is called with no problems.</p>
<p>Step 3. The test passes due to the returned value by the checkSafety function is equal to 1.</p>

### [TCS009] Check Safety (True 9)
<p><b>Pre-Conditions:</b></p>
<p>Configured C environment with the Unity test framework.</p>
<p><b>Steps:</b></p>
<p>Step 1. Initialize the safety sensors variables as following:</p>
<ul>
<li>test_hood_sensor_value = 0</li>
<li>test_trunk_sensor_value = 1</li>
<li>test_door_sensor_value = 1</li>
<li>test_seatbelt_sensor_value = 1</li>
</ul>
<p>Step 2. Insert a call to the function checkSafety().</p>
<p>Step 3. Checks if the returned value from the checkSafety function is equal to 1.</p>
<p><b>Expected results:</b></p>
<p>Step 1. The variables of the safety sensors are saved with their detailed values.</p>
<p>Step 2. The checkSafety() function is called with no problems.</p>
<p>Step 3. The test passes due to the returned value by the checkSafety function is equal to 1.</p>

### [TCS010] Check Safety (True 10)
<p><b>Pre-Conditions:</b></p>
<p>Configured C environment with the Unity test framework.</p>
<p><b>Steps:</b></p>
<p>Step 1. Initialize the safety sensors variables as following:</p>
<ul>
<li>test_hood_sensor_value = 0</li>
<li>test_trunk_sensor_value = 1</li>
<li>test_door_sensor_value = 1</li>
<li>test_seatbelt_sensor_value = 0</li>
</ul>
<p>Step 2. Insert a call to the function checkSafety().</p>
<p>Step 3. Checks if the returned value from the checkSafety function is equal to 1.</p>
<p><b>Expected results:</b></p>
<p>Step 1. The variables of the safety sensors are saved with their detailed values.</p>
<p>Step 2. The checkSafety() function is called with no problems.</p>
<p>Step 3. The test passes due to the returned value by the checkSafety function is equal to 1.</p>

### [TCS011] Check Safety (True 11)
<p><b>Pre-Conditions:</b></p>
<p>Configured C environment with the Unity test framework.</p>
<p><b>Steps:</b></p>
<p>Step 1. Initialize the safety sensors variables as following:</p>
<ul>
<li>test_hood_sensor_value = 0</li>
<li>test_trunk_sensor_value = 1</li>
<li>test_door_sensor_value = 0</li>
<li>test_seatbelt_sensor_value = 1</li>
</ul>
<p>Step 2. Insert a call to the function checkSafety().</p>
<p>Step 3. Checks if the returned value from the checkSafety function is equal to 1.</p>
<p><b>Expected results:</b></p>
<p>Step 1. The variables of the safety sensors are saved with their detailed values.</p>
<p>Step 2. The checkSafety() function is called with no problems.</p>
<p>Step 3. The test passes due to the returned value by the checkSafety function is equal to 1.</p>

### [TCS012] Check Safety (True 12)
<p><b>Pre-Conditions:</b></p>
<p>Configured C environment with the Unity test framework.</p>
<p><b>Steps:</b></p>
<p>Step 1. Initialize the safety sensors variables as following:</p>
<ul>
<li>test_hood_sensor_value = 0</li>
<li>test_trunk_sensor_value = 1</li>
<li>test_door_sensor_value = 0</li>
<li>test_seatbelt_sensor_value = 0</li>
</ul>
<p>Step 2. Insert a call to the function checkSafety().</p>
<p>Step 3. Checks if the returned value from the checkSafety function is equal to 1.</p>
<p><b>Expected results:</b></p>
<p>Step 1. The variables of the safety sensors are saved with their detailed values.</p>
<p>Step 2. The checkSafety() function is called with no problems.</p>
<p>Step 3. The test passes due to the returned value by the checkSafety function is equal to 1.</p>

### [TCS013] Check Safety (True 13)
<p><b>Pre-Conditions:</b></p>
<p>Configured C environment with the Unity test framework.</p>
<p><b>Steps:</b></p>
<p>Step 1. Initialize the safety sensors variables as following:</p>
<ul>
<li>test_hood_sensor_value = 0</li>
<li>test_trunk_sensor_value = 0</li>
<li>test_door_sensor_value = 1</li>
<li>test_seatbelt_sensor_value = 1</li>
</ul>
<p>Step 2. Insert a call to the function checkSafety().</p>
<p>Step 3. Checks if the returned value from the checkSafety function is equal to 1.</p>
<p><b>Expected results:</b></p>
<p>Step 1. The variables of the safety sensors are saved with their detailed values.</p>
<p>Step 2. The checkSafety() function is called with no problems.</p>
<p>Step 3. The test passes due to the returned value by the checkSafety function is equal to 1.</p>

### [TCS014] Check Safety (True 14)
<p><b>Pre-Conditions:</b></p>
<p>Configured C environment with the Unity test framework.</p>
<p><b>Steps:</b></p>
<p>Step 1. Initialize the safety sensors variables as following:</p>
<ul>
<li>test_hood_sensor_value = 0</li>
<li>test_trunk_sensor_value = 0</li>
<li>test_door_sensor_value = 1</li>
<li>test_seatbelt_sensor_value = 0</li>
</ul>
<p>Step 2. Insert a call to the function checkSafety().</p>
<p>Step 3. Checks if the returned value from the checkSafety function is equal to 1.</p>
<p><b>Expected results:</b></p>
<p>Step 1. The variables of the safety sensors are saved with their detailed values.</p>
<p>Step 2. The checkSafety() function is called with no problems.</p>
<p>Step 3. The test passes due to the returned value by the checkSafety function is equal to 1.</p>

### [TCS015] Check Safety (True 15)
<p><b>Pre-Conditions:</b></p>
<p>Configured C environment with the Unity test framework.</p>
<p><b>Steps:</b></p>
<p>Step 1. Initialize the safety sensors variables as following:</p>
<ul>
<li>test_hood_sensor_value = 0</li>
<li>test_trunk_sensor_value = 0</li>
<li>test_door_sensor_value = 0</li>
<li>test_seatbelt_sensor_value = 1</li>
</ul>
<p>Step 2. Insert a call to the function checkSafety().</p>
<p>Step 3. Checks if the returned value from the checkSafety function is equal to 0.</p>
<p><b>Expected results:</b></p>
<p>Step 1. The variables of the safety sensors are saved with the 0 value.</p>
<p>Step 2. The checkSafety() function is called with no problems.</p>
<p>Step 3. The test passes due to the returned value by the checkSafety function is equal to 1.</p>

### [TCS016] Check Safety (False)
<p><b>Pre-Conditions:</b></p>
<p>Configured C environment with the Unity test framework.</p>
<p><b>Steps:</b></p>
<p>Step 1. Initialize the safety sensors variables as following:</p>
<ul>
<li>test_hood_sensor_value = 0</li>
<li>test_trunk_sensor_value = 0</li>
<li>test_door_sensor_value = 0</li>
<li>test_seatbelt_sensor_value = 0</li>
</ul>
<p>Step 2. Insert a call to the function checkSafety().</p>
<p>Step 3. Checks if the returned value from the checkSafety function is equal to 0.</p>
<p><b>Expected results:</b></p>
<p>Step 1. The variables of the safety sensors are saved with the 0 value.</p>
<p>Step 2. The checkSafety() function is called with no problems.</p>
<p>Step 3. The test passes due to the returned value by the checkSafety function is equal to 0.</p>

## Warnings Test Suite
### [TCW001] Safety Check (True)
<p><b>Pre-Conditions:</b></p>
<p>Configured C environment with the Unity test framework.</p>
<p>Declared test_sensor_value variable of type uint8_t.</p>
<p><b>Steps:</b></p>
<p>Step 1. Initialize the test_sensor_value variable with the 1 value.</p>
<p>Step 2. Insert a call to the function safetyWarning() passing the test_sensor_value variable as a paramater.</p>
<p>Step 3. Checks if the returned value from the safetyWarning function is equal to 1.</p>
<p><b>Expected results:</b></p>
<p>Step 1. The warning value is saved on the test_sensor_value variable.</p>
<p>Step 2. The safetyWarning() function is called with no problems.</p>
<p>Step 3. The test passes due to the returned value by the safetyWarning function is equal to 1.</p>

### [TCW002] Safety Check (False)
<p><b>Pre-Conditions:</b></p>
<p>Configured C environment with the Unity test framework.</p>
<p>Declared test_sensor_value variable of type uint8_t.</p>
<p><b>Steps:</b></p>
<p>Step 1. Initialize the test_sensor_value variable with the 0 value.</p>
<p>Step 2. Insert a call to the function safetyWarning() passing the test_sensor_value variable as a paramater.</p>
<p>Step 3. Checks if the returned value from the safetyWarning function is equal to 0.</p>
<p><b>Expected results:</b></p>
<p>Step 1. The warning value is saved on the test_sensor_value variable.</p>
<p>Step 2. The safetyWarning() function is called with no problems.</p>
<p>Step 3. The test passes due to the returned value by the safetyWarning function is equal to 0.</p>

### [TCW003] Broken Check (True)
<p><b>Pre-Conditions:</b></p>
<p>Configured C environment with the Unity test framework.</p>
<p>Declared test_sensor_status variable of type uint8_t.</p>
<p><b>Steps:</b></p>
<p>Step 1. Initialize the test_sensor_status variable with the 1 value.</p>
<p>Step 2. Insert a call to the function brokenWarning() passing the test_sensor_status variable as a paramater.</p>
<p>Step 3. Checks if the returned value from the brokenWarning function is equal to 1.</p>
<p><b>Expected results:</b></p>
<p>Step 1. The warning value is saved on the test_sensor_value variable.</p>
<p>Step 2. The brokenWarning() function is called with no problems.</p>
<p>Step 3. The test passes due to the returned value by the brokenWarning function is equal to 1.</p>

### [TCW004] Broken Check (False)
<p><b>Pre-Conditions:</b></p>
<p>Configured C environment with the Unity test framework.</p>
<p>Declared test_sensor_status variable of type uint8_t.</p>
<p><b>Steps:</b></p>
<p>Step 1. Initialize the test_sensor_status variable with the 0 value.</p>
<p>Step 2. Insert a call to the function brokenWarning() passing the test_sensor_status variable as a paramater.</p>
<p>Step 3. Checks if the returned value from the brokenWarning function is equal to 0.</p>
<p><b>Expected results:</b></p>
<p>Step 1. The warning value is saved on the test_sensor_value variable.</p>
<p>Step 2. The brokenWarning() function is called with no problems.</p>
<p>Step 3. The test passes due to the returned value by the brokenWarning function is equal to 0.</p>

## Wellbeing Test Suite
### [TCWB001] Check Air Conditioner (False)
<p><b>Pre-Conditions:</b></p>
<p>Configured C environment with the Unity test framework.</p>
<p>Declared test_SOC variable of type float.</p>
<p>Declared test_air_cond_speed variable of type uint8_t.</p>
<p><b>Steps:</b></p>
<p>Step 1. Initialize the test_air_cond_speed variable with the 3 value and the test_SOC variable with the 0.5 value.</p>
<p>Step 2. Insert a call to the function checkAirCond() passing the test_air_cond_speed and test_SOC variables, respectively, as paramaters.</p>
<p>Step 3. Checks if the returned value from the checkAirCond function is equal to 0.</p>
<p><b>Expected results:</b></p>
<p>Step 1. The air speed is saved on the test_air_cond_speed variable and the state of charge is saved on the test_SOC variable.</p>
<p>Step 2. The checkAirCond() function is called with no problems.</p>
<p>Step 3. The test passes due to the returned value by the checkAirCond function is equal to 0.</p>

### [TCWB002] Check Air Conditioner (True 1)
<p><b>Pre-Conditions:</b></p>
<p>Configured C environment with the Unity test framework.</p>
<p>Declared test_SOC variable of type float.</p>
<p>Declared test_air_cond_speed variable of type uint8_t.</p>
<p><b>Steps:</b></p>
<p>Step 1. Initialize the test_air_cond_speed variable with the 1 value and the test_SOC variable with the 0.5 value.</p>
<p>Step 2. Insert a call to the function checkAirCond() passing the test_air_cond_speed and test_SOC variables, respectively, as paramaters.</p>
<p>Step 3. Checks if the returned value from the checkAirCond function is equal to 1.</p>
<p><b>Expected results:</b></p>
<p>Step 1. The air speed is saved on the test_air_cond_speed variable and the state of charge is saved on the test_SOC variable.</p>
<p>Step 2. The checkAirCond() function is called with no problems.</p>
<p>Step 3. The test passes due to the returned value by the checkAirCond function is equal to 1.</p>

### [TCWB003] Check Air Conditioner (True 2)
<p><b>Pre-Conditions:</b></p>
<p>Configured C environment with the Unity test framework.</p>
<p>Declared test_SOC variable of type float.</p>
<p>Declared test_air_cond_speed variable of type uint8_t.</p>
<p><b>Steps:</b></p>
<p>Step 1. Initialize the test_air_cond_speed variable with the 3 value and the test_SOC variable with the 0.9 value.</p>
<p>Step 2. Insert a call to the function checkAirCond() passing the test_air_cond_speed and test_SOC variables, respectively, as paramaters.</p>
<p>Step 3. Checks if the returned value from the checkAirCond function is equal to 1.</p>
<p><b>Expected results:</b></p>
<p>Step 1. The air speed is saved on the test_air_cond_speed variable and the state of charge is saved on the test_SOC variable.</p>
<p>Step 2. The checkAirCond() function is called with no problems.</p>
<p>Step 3. The test passes due to the returned value by the checkAirCond function is equal to 1.</p>

### [TCWB004] Check Air Conditioner (True 3)
<p><b>Pre-Conditions:</b></p>
<p>Configured C environment with the Unity test framework.</p>
<p>Declared test_SOC variable of type float.</p>
<p>Declared test_air_cond_speed variable of type uint8_t.</p>
<p><b>Steps:</b></p>
<p>Step 1. Initialize the test_air_cond_speed variable with the 1 value and the test_SOC variable with the 0.9 value.</p>
<p>Step 2. Insert a call to the function checkAirCond() passing the test_air_cond_speed and test_SOC variables, respectively, as paramaters.</p>
<p>Step 3. Checks if the returned value from the checkAirCond function is equal to 1.</p>
<p><b>Expected results:</b></p>
<p>Step 1. The air speed is saved on the test_air_cond_speed variable and the state of charge is saved on the test_SOC variable.</p>
<p>Step 2. The checkAirCond() function is called with no problems.</p>
<p>Step 3. The test passes due to the returned value by the checkAirCond function is equal to 1.</p>
