MontyHallSimulation

The Monty Hall Problem is probability rule based out of a game show hosted by Monty Hall. A player in the game show would attempt to pick a door which hid a prize from a set of three doors. After the player had picked a door, the host would randomly open one of the other two. If there was no prize behind the opened door, the host would allow the player to decide if they wanted to switch from their current door choice to the final remaining door. 

The statistical mind bender in the problem was solved by statistician Steve Selvin who proved that the player should ALWAYS switch doors. The reason for this is because while the original probability of the player being successful was only 33%, the host had revealed additional information to the player by opening the second door. The players who capitalized on this information and switched actually had a 66% chance of winning

Originally, I saw this problem on a ted talk( i think) and could not wrap my head around it. How could the outcome be 66%, when the player is only picking between two doors? I wrote this simulation to help myself visualize this problem. It basically runs as many "gameshows" as I want and keeps track of the wins and losses based on decisions.
