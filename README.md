# EndlessRunner


In this Endless Runner game. You are playing as cube meant to jump over obstacles and avoid spikes from taking damage.

part 1
RunnerCharacter class is where the basic logic appears. It continously moves forward in Y-axis. The only thing one can do is jump. To make it more difficult the speed accelerates all the time. Also if the player dies then it will restart from the beginning with three health.

PlatformManager class spawns new platform after the player character collides at the end of each platform. I have set out some BoxComponent for it to trigger. New platforms from five pre-made selected platforms to spawn randomly. This class collaborates with other class such as SpawnLevel for it to function.

I am part ways complete with highscore functionality. So far it acts like a timer for how long you can survive. The way to save it has yet to be implemented for part 1.
