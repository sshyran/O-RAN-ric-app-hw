/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-PDU-Descriptions"
 * 	found in "e2ap-oran-wg3-v01.00.asn"
 * 	`asn1c -fno-include-deps -fcompound-names -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_UnsuccessfulOutcome_H_
#define	_UnsuccessfulOutcome_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ProcedureCode.h"
#include "Criticality.h"
#include <ANY.h>
#include <asn_ioc.h>
#include "RICsubscriptionRequest.h"
#include "RICsubscriptionResponse.h"
#include "RICsubscriptionFailure.h"
#include "RICsubscriptionDeleteRequest.h"
#include "RICsubscriptionDeleteResponse.h"
#include "RICsubscriptionDeleteFailure.h"
#include "RICserviceUpdate.h"
#include "RICserviceUpdateAcknowledge.h"
#include "RICserviceUpdateFailure.h"
#include "RICcontrolRequest.h"
#include "RICcontrolAcknowledge.h"
#include "RICcontrolFailure.h"
#include "E2setupRequest.h"
#include "E2setupResponse.h"
#include "E2setupFailure.h"
#include "ResetRequest.h"
#include "ResetResponse.h"
#include "RICindication.h"
#include "RICserviceQuery.h"
#include "ErrorIndication.h"
#include <OPEN_TYPE.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UnsuccessfulOutcome__value_PR {
	UnsuccessfulOutcome__value_PR_NOTHING,	/* No components present */
	UnsuccessfulOutcome__value_PR_RICsubscriptionFailure,
	UnsuccessfulOutcome__value_PR_RICsubscriptionDeleteFailure,
	UnsuccessfulOutcome__value_PR_RICserviceUpdateFailure,
	UnsuccessfulOutcome__value_PR_RICcontrolFailure,
	UnsuccessfulOutcome__value_PR_E2setupFailure
} UnsuccessfulOutcome__value_PR;

/* UnsuccessfulOutcome */
typedef struct UnsuccessfulOutcome {
	ProcedureCode_t	 procedureCode;
	Criticality_t	 criticality;
	struct UnsuccessfulOutcome__value {
		UnsuccessfulOutcome__value_PR present;
		union UnsuccessfulOutcome__value_u {
			RICsubscriptionFailure_t	 RICsubscriptionFailure;
			RICsubscriptionDeleteFailure_t	 RICsubscriptionDeleteFailure;
			RICserviceUpdateFailure_t	 RICserviceUpdateFailure;
			RICcontrolFailure_t	 RICcontrolFailure;
			E2setupFailure_t	 E2setupFailure;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UnsuccessfulOutcome_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UnsuccessfulOutcome;
extern asn_SEQUENCE_specifics_t asn_SPC_UnsuccessfulOutcome_specs_1;
extern asn_TYPE_member_t asn_MBR_UnsuccessfulOutcome_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _UnsuccessfulOutcome_H_ */
#include <asn_internal.h>
