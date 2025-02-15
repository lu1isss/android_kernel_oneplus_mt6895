#ifndef _OPPO_PROJECT_H_
#define _OPPO_PROJECT_H_
#include "oplus_project_data_ocdt.h"
#include "oplus_project_oldcdt.h"

#define ALIGN4(s) ((sizeof(s) + 3)&(~0x3))

#define FEATURE1_OPEARTOR_OPEN_MASK 0000
#define FEATURE1_FOREIGN_MASK 0001
#define FEATURE1_OPEARTOR_CMCC_MASK 0010
#define FEATURE1_OPEARTOR_CT_MASK 0011
#define FEATURE1_OPEARTOR_CU_MASK 0100
#define FEATURE1_OPEARTOR_MAX_MASK 1111


enum F_INDEX {
	IDX_1 = 1,
	IDX_2,
	IDX_3,
	IDX_4,
	IDX_5,
	IDX_6,
	IDX_7,
	IDX_8,
	IDX_9,
	IDX_10,
};

struct pcb_match {
	enum PCB_VERSION version;
	char *str;
};
unsigned int get_cdt_version(void);
unsigned int get_eng_version(void);
unsigned int is_new_cdt(void);

//cdt interface for Q or R
unsigned int get_project(void);
unsigned int is_project(int project);
unsigned int get_Oppo_Boot_Mode(void);
unsigned int get_PCB_Version(void);
unsigned int get_audio(void);
unsigned int get_dtsiNo(void);
uint32_t get_oppo_feature(enum F_INDEX index);

//cdt interface for P->R
int32_t get_Modem_Version(void);
int32_t get_Operator_Version(void);

//eng cdt data for P or Q or R
bool is_confidential(void);
bool oplus_daily_build(void);


#endif
