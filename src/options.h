#ifndef __OPTIONS_H
#define __OPTIONS_H

#define LOGICAL_WIDTH_PX 400
#define LOGICAL_HEIGHT_PX 300

#define BULLET_SPEED 0.8f
#define BULLET_DELAY 0.25f

#define SHIP_ROTATION_SPEED 4.0f
#define SHIP_ACCELERATION 0.45f
#define SHIP_RADIUS 0.038f
#define SHIP_PIVOT 0.025f
#define SHIP_THRUSTER_BLINK 0.03f
#define SHIP_DEATH_DELAY 1.7f
#define SHIP_EXPLOSION_SPEED 0.03f
#define SHIP_EXPLOSION_SHARDS 5
#define SHIP_EXPLOSION_SHARD_ROT_SPEED 1.0f
#define SHIP_EXPLOSION_LENGTH 0.3f

#define EXPLOSION_LENGTH 0.3f
#define EXPLOSION_SPEED 0.4f
#define EXPLOSION_PARTICLES 11

#define ASTEROID_SPEED_MIN 0.05f
#define ASTEROID_SPEED_MAX 0.11f
#define ASTEROID_RADIUS 0.032f
#define ASTEROID_ROT_SPEED_MIN -0.5f
#define ASTEROID_ROT_SPEED_MAX 0.5f
#define NUM_ASTEROID_SHAPES 4

#define FONT_WIDTH 0.04f
#define FONT_SPACE 0.0025f

#define SCORE_DIGITS 7
#define SCORE_BUFFER_SIZE (SCORE_DIGITS + 1)

#define MAX_ASTEROIDS 100
#define MAX_BULLETS 20
#define MAX_BULLET_DISTANCE (1.0f / 2.0f - SHIP_PIVOT)
#define MAX_EXPLOSIONS 20
#define MAX_EXPLOSION_SHARDS 10
#define MAX_SCORES 10
#define MAX_SPEED 0.75f

#define NUM_SOUNDS 5
#define SOUND_BEAT1 0
#define SOUND_BEAT2 1
#define SOUND_EXPLOSION 2
#define SOUND_PHASER 3
#define SOUND_THRUSTER 4

#define ENABLE_AUTO_FIRE 1
#define DEFAULT_LIVES 3
#define POINTS_PER_HIT 20
#define NO_ASTEROID_RADIUS 0.19f   /* Asteroids spawn >= distance from ship */
#define NO_ASTEROID_RADIUS_RESPAWN 0.12f
#define TITLE_ASTEROIDS 5
#define START_LEVEL_DELAY_MS 2000.0f
#define NEXT_WAVE_DELAY 3.0f

#define MAX_PLAYER_BULLETS 10

#define GAMEOVER_COUNTDOWN 1.0f
#define GAMEOVER_DELAY 3.0f

#define HIGHSCORES_FILE "highscores.csv"

#endif
