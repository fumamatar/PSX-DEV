#ifndef PLAYER_H_  
#define PLAYER_H_

#include <sys/types.h>	// This provides typedefs needed by libgte.h and libgpu.h
#include <stdio.h>	    // Not necessary but include it anyway
#include <libetc.h>	    // Includes some functions that controls the display
#include <libgte.h>	    // GTE header, not really used but libgpu.h depends on it
#include <libgpu.h>	    // GPU library header
#include <libapi.h>     // API header, has InitPAD() and StartPAD() defs
#include "STRUCTS.H"
#include "GAMEPAD.H"

#define WALK_SPEED 1
#define JUMP_SPEED 6
#define GRAVITY 1
#define JUMP_PRESS_MAX_DURATION 12 // number of frames which the player can hold the jump button to increase height
#define JUMP_INCREASE_THRESHOLD 2
#define MAX_FALLING_SPEED 3

void initPlayer(PLAYER_CHAR* player, int start_x, int start_y);
void updatePlayer(PLAYER_CHAR* player, int frames_passed);
void movePlayer(PLAYER_CHAR* player);
void fallIfNotOnGround(PLAYER_CHAR* player);
void detectCollisions(PLAYER_CHAR* player);
void drawPlayer(PLAYER_CHAR* player, int frames_passed);
void setState(PLAYER_CHAR *player);

#endif // PLAYER_H_