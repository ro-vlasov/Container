#ifndef _CGROUP_H
#define _CGROUP_H

struct cgrp_control {
        char control[256];
        struct cgrp_setting {
                char name[256];
                char value[256];
        } **settings;
};

int cgroup_namespace(const isolproc_info* config);
int free_cgroup(const isolproc_info* config); 
#endif
