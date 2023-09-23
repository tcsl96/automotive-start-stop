# Start-stop system - stellantis
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
<p></p><b>Expected results:</b><p>Step 1. The speed value is saved on the spd variable.</p><p>Step 2. The checkSpeed function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkSpeed function being equals to 1.</p><p>

### [TCD002] Dynamic Speed Check (False)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p><p>Declared spd variable of type float.</p></p>
<p><b>Steps:</b> <p>Step 1. Assign the value of 6.123 to the spd variable.</p><p>Step 2. Insert a call to the function CheckSpeed().</p><p>Step 3. Checks if the returned value from the CheckSpeed functin is equals to 0.</p></p>
<p></p><b>Expected results:</b><p>Step 1. The speed value is saved on the spd variable.</p><p>Step 2. The CheckSpeed function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the CheckSpeed function being equals to 0.</p><p>

### [TCD003] Check Brake (True)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p><p>Declared time_test variable of type short int.</p><p>Declared t variable of type unsigned char.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the time_test variable with the 0 value.</p><p>Step 2. Insert a call to the function checkBrake() passing the t parameter and the time_test respectively.</p><p>Step 3. Checks if the returned value from the checkBrake function is equals to 0.</p></p>
<p></p><b>Expected results:</b><p>Step 1. The time in the beginning of the test execution is saved on the time_test variable.</p><p>Step 2. The CheckBrake function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkBrake function being equals to 0.</p><p>

### [TCD004] Check Brake (True 2)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p><p>Declared time_test variable of type short int.</p><p>Declared t variable of type unsigned char.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the time_test variable with the 10 value.</p><p>Step 2. Insert a call to the function checkBrake() passing the t parameter and the time_test respectively.</p><p>Step 3. Checks if the returned value from the checkBrake function is equals to 0.</p></p>
<p></p><b>Expected results:</b><p>Step 1. The time in the beginning of the test execution is saved on the time_test variable.</p><p>Step 2. The CheckBrake function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkBrake function being equals to 0.</p><p>

### [TCD005] Check Brake (False)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p><p>Declared time_test variable of type short int.</p><p>Declared f variable of type unsigned char.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the time_test variable with the 0 value.</p><p>Step 2. Insert a call to the function checkBrake() passing the f parameter and the time_test respectively.</p><p>Step 3. Checks if the returned value from the checkBrake function is equals to 0.</p></p>
<p></p><b>Expected results:</b><p>Step 1. The time in the beginning of the test execution is saved on the time_test variable.</p><p>Step 2. The CheckBrake function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkBrake function being equals to 0.</p><p>

### [TCD006] Check Brake (False 2)
<p><b>Pre-Conditions:</b> <p>Configured C environment with the Unity test framework.</p><p>Declared time_test variable of type short int.</p><p>Declared f variable of type unsigned char.</p></p>
<p><b>Steps:</b> <p>Step 1. Initialize the time_test variable with the 10 value.</p><p>Step 2. Insert a call to the function checkBrake() passing the f parameter and the time_test respectively.</p><p>Step 3. Checks if the returned value from the checkBrake function is equals to 0.</p></p>
<p></p><b>Expected results:</b><p>Step 1. The time in the beginning of the test execution is saved on the time_test variable.</p><p>Step 2. The CheckBrake function is called with no problems.</p><p>Step 3. The test passes due to the returned value by the checkBrake function being equals to 0.</p><p>
  
## Hardware Test Suite
TCH001 -
## Power Test Suite
TCP001 -
## Safety Test Suite
TCS001 -
## Warnings Test Suite
TCW001 -
## Wellbeing Test Suite
TCWB001 - 
