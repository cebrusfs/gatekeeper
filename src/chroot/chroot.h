#pragma once


/**
 * Adds a UID mapping
 */
void chroot_add_uid_mapping(int real, int fake);

/**
 * Adds a UID mapping
 */
void chroot_add_gid_mapping(int real, int fake);

/**
 * Block forking inside the chroot
 */
void chroot_block_forking();

/**
 * Adds the default bind points
 */
void chroot_add_bind_defaults();

/**
 * Adds a bind point
 */
void chroot_add_bind(char* path);

/**
 * Actually invoke the chroot.
 *
 * @return
 * Zero if everything was successful, non-zero
 * if anything failed.
 */
int chroot_invoke();
