#include "modding.h"
#include "ultra64.h"
#include "enums.h"
#include "common_structs.h"

void func_global_asm_807124B8(Maps newMap, s32 cutsceneIndex, u8 newGameMode);
extern Maps current_map;
extern u8 game_mode;
extern u8 game_mode_copy;
extern s32 D_global_asm_80755338;
extern u32 object_timer;
extern void *D_global_asm_8076BF38[];
void *memcpy(void *,const void *,size_t);
u8 initialization_countdown = 2;
u32 windows_95_startup[] = {
    0x00000044, 0x00000054,
    0x00000183, 0x000001b8,
    0x00000279, 0x00000000,
    0x00000000, 0x00000000,
    0x00000000, 0x00000000,
    0x00000000, 0x00000000,
    0x00000000, 0x00000000,
    0x00000000, 0x00000000,
    0x000001e0, 0x00ff510d,
    0x14369e00, 0xff510e4e,
    0x1c00ff2f, 0x00b00000,
    0x00c01a00, 0xb0075000,
    0xe0544d00, 0x90166083,
    0x5f641d60, 0x827b827c,
    0x1d60995d, 0x28206099,
    0x35282260, 0x990d2824,
    0x60986528, 0x2760983d,
    0x28296098, 0x158120b0,
    0x07503c07, 0x4f1e074e,
    0x1e074d1e, 0x074c1e07,
    0x4b1e074a, 0x1e07491e,
    0x07481e07, 0x471e0746,
    0x1e07451e, 0x07441e07,
    0x431e0742, 0x1e07413c,
    0x07401e07, 0x3f1e073e,
    0x1e073d1e, 0x073c1e07,
    0x3b1e073a, 0x1e07391e,
    0x07381e07, 0x371e0736,
    0x1e07351e, 0x07341e07,
    0x331e0732, 0x1e07313c,
    0x07301e07, 0x2f1e072e,
    0x1e072d1e, 0x072c1e07,
    0x2b1e072a, 0x1e07291e,
    0x07281e07, 0x271e0726,
    0x1e07251e, 0x07241e07,
    0x231e0722, 0x1e07213c,
    0x07201e07, 0x1f1e071e,
    0x1e071d1e, 0x071c1e07,
    0x1b1e071a, 0x1e07191e,
    0x07181e07, 0x171e0716,
    0x1e07151e, 0x07141e07,
    0x131e0712, 0x1e07113c,
    0x07101e07, 0x0f1e070e,
    0x1e070d1e, 0x070c1e07,
    0x0b1e070a, 0x1e07091e,
    0x07081e07, 0x071e0706,
    0x1e07051e, 0x07041e07,
    0x031e0702, 0x1e070183,
    0x1dff2f00, 0xb1000000,
    0xc13600b1, 0x0a3f0007,
    0x6e00e154, 0x4d882491,
    0x537f8359, 0x8360537f,
    0x83598360, 0x53688359,
    0x83605350, 0x83598360,
    0x533c8359, 0x8359ff2f,
    0x00b20000, 0x00c22800,
    0xb20a3f00, 0x073200e2,
    0x544d0092, 0x2f509259,
    0x00285092, 0x5983603b,
    0x3c8e7914, 0x3e3c8e65,
    0x14403c8e, 0x5114473c,
    0x8e3d1eb2, 0x07311e07,
    0x301e072f, 0x1e072e1e,
    0x072d1e07, 0x2c1e072b,
    0x1e072a1e, 0x07291e07,
    0x281e0727, 0x1e07261e,
    0x07251e07, 0x241e0723,
    0x1e07211e, 0x07201e07,
    0x1f1e071e, 0x1e071d1e,
    0x071c1e07, 0x1b1e071a,
    0x1e07191e, 0x07181e07,
    0x171e0716, 0x1e07151e,
    0x07141e07, 0x131e0711,
    0x1e07101e, 0x070f1e07,
    0x0e1e070d, 0x1e070c1e,
    0x070b1e07, 0x0a1e0709,
    0x1e07081e, 0x07071e07,
    0x061e0705, 0x1e07041e,
    0x07031e07, 0x018359ff,
    0x2f00b300, 0x0000c312,
    0x00b30a3f, 0x00070000,
    0xe3544d85, 0x50b30701,
    0x00934a40, 0x94490047,
    0x40944900, 0x45409449,
    0x00434094, 0x49004240,
    0x94490040, 0x40944900,
    0x3e409449, 0x3cb30702,
    0x3c07031e, 0x07041e07,
    0x051e0706, 0x3c07071e,
    0x07081e07, 0x091e070a,
    0x1e070b3c, 0x070c1e07,
    0x0d1e070e, 0x1e070f3c,
    0x07101e07, 0x111e0712,
    0x1e07131e, 0x07141e07,
    0x151e0717, 0x1e07191e,
    0x071b1e07, 0x1d1e071f,
    0x1e07211e, 0x07231e07,
    0x241e0726, 0x1e07281e,
    0x072a1e07, 0x2c1e072e,
    0x1e07301e, 0x07321e07,
    0x331e0735, 0x1e07371e,
    0x07391e07, 0x3b1e073d,
    0x1e073f1e, 0x07411e07,
    0x421e0744, 0x1e07461e,
    0x07481e07, 0x4a1e074c,
    0x1e074e1e, 0x07501e07,
    0x4f1e0751, 0x1e07521e,
    0x07541e07, 0x551e0757,
    0x1e07581e, 0x075a1e07,
    0x571e0753, 0x1e074f1e,
    0x074c1e07, 0x481e0744,
    0x1e07411e, 0x073d1e07,
    0x391e0735, 0x1e07321e,
    0x072e1e07, 0x2a1e0727,
    0x1e07231e, 0x071f1e07,
    0x1b1e0718, 0x1e07141e,
    0x07101e07, 0x0d1e0709,
    0x1e07051e, 0x070100ff,
    0x2f000000, 0x00000000,
    0x00000000, 0x00000000,
};

rgba KongRGBA[] = {
    {.red=0xFF, .green=0xD7, .blue=0x00, .alpha=0xFF},
    {.red=0xFF, .green=0x00, .blue=0x00, .alpha=0xFF},
    {.red=0x16, .green=0x99, .blue=0xFF, .alpha=0xFF},
    {.red=0xB0, .green=0x45, .blue=0xFF, .alpha=0xFF},
    {.red=0x41, .green=0xFF, .blue=0x25, .alpha=0xFF},
};
extern void addActorToTextOverlayRenderArray(void *arg0, Actor *arg1, u8 arg2);
extern Gfx *func_global_asm_806FD490(Gfx *, s32, s32 x, s32 y, char *string);
u8 wait_progress_master = 0;
u8 wait_progress_timer = 0;
#define LOADBAR_START 350
#define LOADBAR_FINISH 900
#define LOADBAR_MAXWIDTH 200
#define LOADBAR_DIVISOR 35

Gfx* drawPixelText(Gfx* dl, s32 x, s32 y, char* str, u8 red, u8 green, u8 blue, u8 alpha) {
	gDPPipeSync(dl++);
	gDPSetCycleType(dl++, G_CYC_1CYCLE);
	gSPClearGeometryMode(dl++, G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH | G_CLIPPING | 0x0040F9FA);
	gSPSetGeometryMode(dl++, G_SHADE | G_SHADING_SMOOTH);
    gDPSetPrimColor(dl++, 0, 0, red, green, blue, alpha);
    gDPSetCombineMode(dl++, G_CC_MODULATEIA_PRIM, G_CC_MODULATEIA_PRIM);
	gDPSetRenderMode(dl++, G_RM_XLU_SURF, G_RM_XLU_SURF2);
    return func_global_asm_806FD490(dl, 2, x, y, str);
}

Gfx* drawScreenRect(Gfx* dl, s32 x1, s32 y1, s32 x2, s32 y2, u8 red, u8 green, u8 blue, u8 alpha) {
    u16 color;

	gDPPipeSync(dl++);
	gDPSetCycleType(dl++, G_CYC_1CYCLE);
	gDPSetRenderMode(dl++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	gDPSetCombineMode(dl++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
    gDPSetPrimColor(dl++, 0, 0, red, green, blue, alpha);
	gDPFillRectangle(dl++, x1 >> 2, y1 >> 2, x2 >> 2, y2 >> 2);
    gDPPipeSync(dl++);
	return dl;
}

Gfx *drawLoadingScreen(Gfx *dl, Actor *ac) {
    s32 left_f;
    s32 left;
    s32 right;
    s32 bar_y;
    s32 bar_text_y;
    rgba *address;

    wait_progress_timer++;
    if (wait_progress_timer > LOADBAR_DIVISOR) {
        wait_progress_timer = 0;
        wait_progress_master++;
        if (wait_progress_master > 4) {
            wait_progress_master = 0;
        }
    }
    address = &KongRGBA[wait_progress_master];
    left_f = (((LOADBAR_FINISH - LOADBAR_START) + LOADBAR_MAXWIDTH) / LOADBAR_DIVISOR) * wait_progress_timer;
    left = left_f + LOADBAR_START - LOADBAR_MAXWIDTH;
    right = left + LOADBAR_MAXWIDTH;
    if (left < LOADBAR_START) {
        left = LOADBAR_START;
    }
    if (left > LOADBAR_FINISH) {
        left = LOADBAR_FINISH;
    }
    if (right > LOADBAR_FINISH) {
        right = LOADBAR_FINISH;
    }
    if (right < LOADBAR_START) {
        right = LOADBAR_START;
    }
    bar_y = 475;
    bar_text_y = 130;
    dl = drawScreenRect(dl, left, bar_y, right, bar_y + 10, address->red, address->green, address->blue, address->alpha);
    dl = drawPixelText(dl, 55, bar_text_y, "LOADING DK64 REKONGPILED", 0xFF, 0xFF, 0xFF, 0xFF);
    dl = drawPixelText(dl, 110, bar_text_y + 20, "PLEASE WAIT", 0xFF, 0xFF, 0xFF, 0xFF);
    return dl;
}

u8 has_loaded = FALSE;
RECOMP_CALLBACK("*", dk64recomp_every_frame) void fastInitLoading(void) {
    s32 loaded;
    if (current_map == MAP_TITLE_SCREEN_NOT_FOR_RESALE_VERSION) {
        // if (object_timer == 5) {
        // 		preventSongPlaying = 0;
        // 	}
        loaded = *(volatile u8*)(0x807F01A6);
        addActorToTextOverlayRenderArray(drawLoadingScreen, NULL, 5);
        if ((loaded) || (object_timer > 800)) {
            if (!has_loaded) {
                func_global_asm_807124B8(MAP_MAIN_MENU, 0, GAME_MODE_MAIN_MENU);
                has_loaded = TRUE;
            }
        }
    } else if (initialization_countdown > 0) {
        if (initialization_countdown == 1) {
            func_global_asm_807124B8(MAP_TITLE_SCREEN_NOT_FOR_RESALE_VERSION, 0, GAME_MODE_MAIN_MENU);
            D_global_asm_80755338 = 0;
            game_mode = GAME_MODE_MAIN_MENU;
            game_mode_copy = GAME_MODE_MAIN_MENU;
        }
        initialization_countdown--;
    }
}

RECOMP_CALLBACK("*", recomp_on_music_bin_load) void win95_play(s32 song, s32 bank, u8 *bin) {
    if (current_map == MAP_TITLE_SCREEN_NOT_FOR_RESALE_VERSION) {
        memcpy(D_global_asm_8076BF38[bank], &windows_95_startup[0], sizeof(windows_95_startup));
    }
}