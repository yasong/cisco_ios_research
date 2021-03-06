
flash_defines.h,3141
#define __FLASH_DEFINES_H__64,2447
#define SF 75,2556
#define BF 76,2575
#define FLASH_MIN_PART_CNT 83,2758
#define FLASH_MAX_PART_CNT 84,2787
#define FLASH_MIN_CHIP_CNT 91,2930
#define  SHOW_FLASH_SIZE	96,2994
#define  SHOW_FLASH_CHIPS	97,3021
#define  SHOW_FLASH_ERR	98,3049
#define  SHOW_FLASH_ALL	99,3076
#define  SHOW_VER_FLASH_SIZE	100,3103
#define  SHOW_DEV_INFO_MASK 101,3134
#define  SHOW_FILES_BRIEF	106,3211
#define  SHOW_FILES_DETAILED	107,3243
#define  SHOW_FILES_SUMMARY	108,3278
#define  SHOW_FS_INFO_MASK 109,3312
#define MIN(MIN112,3364
#define FLASH_PHY_DEV_NAME_LEN 115,3409
#define FLASH_LOG_DEV_NAME_LEN 116,3485
#define FLASH_DEV_NAME_LEN 117,3519
#define FLASH_FILE_NAME_LEN 123,3732
#define FLASH_FILE_NAME_MALLOC_LEN 125,3864
#define FLASH_PATH_MALLOC_LEN 126,3943
#define FLASH_SERVER_NAME_LEN 128,4058
#define FLASH_SERVER_NAME_MALLOC_LEN 129,4092
#define FLASH_PATH_SEPARATOR 130,4133
#define FLASH_MIN_FREE_SPACE 132,4170
#define FLASH_MIN_HDR_SIZE 133,4210
#define FLASH_PRIMARY 135,4242
#define FLASH_FOR_BOOTSTRAP 136,4272
#define FLASH_PCMCIA_CARD 137,4302
#define MAX_CHIPS_IN_BANK 139,4333
#define MAX_CHIPS	140,4363
#define BW_8BITS 142,4389
#define BW_16BITS 143,4437
#define BW_32BITS 144,4467
#define BW_8BITS_MASK 146,4498
#define BW_16BITS_MASK 147,4534
#define BW_32BITS_MASK 148,4569
#define VPP_OFF	150,4609
#define VPP_ON 151,4628
#define VPP_UNKNOWN	152,4647
#define CACHE_OFF	153,4669
#define CACHE_ON	154,4689
#define VPP_RAMP_UP 157,4747
#define VPP_RAMP_DOWN 158,4775
enum flash_cache flash_cache160,4804
    CACHE_NOT_INIT,161,4823
    CACHE_NONE,162,4882
    CACHE_OLD_CACHE,163,4941
    CACHE_NEW_CACHE 164,4993
#define FS_COPY_UNKNOWN 170,5117
#define FS_COPY_FLH 171,5145
#define FS_COPY_DIRECT 172,5173
#define SNMP_DEV_STATE_RDONLY 177,5253
#define SNMP_DEV_STATE_RFF 178,5288
#define SNMP_DEV_STATE_RW 179,5323
#define FLASH_FILE_DELETED 184,5408
#define FLASH_FILE_INVALID_CHKSUM 185,5448
#define FLASH_FILE_VALID 186,5488
#define TWO_FIFTY_K 188,5529
#define ONE_MB 189,5575
#define FS_MALLOC_BLOCK 190,5615
#define SNMP_NO_ERROR	195,5706
#define SNMP_INVALID_OP	196,5732
#define SNMP_INVALID_PROTO	197,5760
#define SNMP_INVALID_SRC_FILE	198,5790
#define SNMP_INVALID_DEST_FILE	199,5823
#define SNMP_INVALID_SRVR_ADDR	200,5857
#define SNMP_DEVICE_BUSY	201,5891
#define SNMP_DEVICE_OPEN_ERR	202,5919
#define SNMP_DEVICE_ERR	203,5951
#define SNMP_DEVICE_READONLY	204,5979
#define SNMP_DEVICE_FULL	205,6011
#define SNMP_FILE_OPEN_ERR	206,6040
#define SNMP_FILE_TRANSFER_ERR	207,6071
#define SNMP_FILE_CHECKSUM_ERR	208,6106
#define SNMP_FILE_DELETE_FAIL	209,6141
#define SNMP_FILE_UNDELETE_FAIL	210,6175
#define SNMP_LOW_RESOURCES	211,6211
#define SNMP_UNKNOWN_ERROR	212,6242
#define SNMP_DEVICE_SQUEEZE_FAIL	213,6273
#define SNMP_DEVICE_FORMAT_FAIL	214,6309
#define FLASH_BASIC_FLH_SUPPORT	220,6442
#define FLASH_FLH_SUPPORT_WITH_DFB	221,6478
#define FLASH_FLH_SUPPORT_WITH_RCP	222,6516
typedef struct flash_copy_parms flash_copy_parms229,6698
} flash_copy_parms_t;flash_copy_parms_t252,8116
