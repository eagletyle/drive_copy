# Drive
Repo for COMP313/MDDN321 Group 16 project.

## Outline
This game is currently built using several player controllers and several maps. The player controllers contain the rules/logic for particular game modes (Time Trial, Checkpoint, Race, etc), and then the maps contain the actors which when interacted with will set off custom events in the player controllers to begin timers, or update variables such as lap count, time difference and sector time.    
The game loop aspect of this project is present in the main menu, and then in the pause menu while playing the game. When in the main menu, the player is able to return to the previous menu to change their selections. The player is also able to pause the current game and return to the main menu or restart the game at any time. The game also restarts when the max number of laps is reached, when the player fails to make it to the next checkpoint in time or when the player fails to beat the AI opponent.

### Libraries/Assets
No libraries were used  
All assets were created for this project  

### Installation & Set Up 

### Video Links
Gameplay: https://www.youtube.com/watch?v=ymqDIgrxby0&ab_channel=AidanRoberts  
Code documentation: https://www.youtube.com/watch?v=YGZGtMfi9gc&ab_channel=AidanRoberts  

### How to Play
Run executable  
Press any button to start  
Select "Drive"  
Select Game Mode (Race, Chase, Checkpoint or Time Trial)  
Select Vehicle (Ferrari, Lamborghini, Porsche)  

Controls (Keyboard):  
W/Up: Accelerate  
A/Left: Turn Left  
S/Down: Reverse  
D/Right: Turn Right  
Space: Handbrake  
Left Shift: Drift  
E: Shift Up (Manual)  
Q: Shift Down (Manual)  
Backspace: Reset Vehicle  
M/P: Pause  
