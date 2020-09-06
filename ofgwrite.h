#include <sys/stat.h>

static struct stat kernel_file_stat;
static struct stat rootfs_file_stat;

static int multiboot_partition;
static char current_rootfs_device[1000];
static char vumodel[63];

enum RootfsTypeEnum
{
	UNKNOWN, UBIFS, JFFS2, EXT4
};
