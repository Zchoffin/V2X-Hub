/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603.asn1"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
 */

#ifndef	_TractionControlStatus_H_
#define	_TractionControlStatus_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TractionControlStatus {
	TractionControlStatus_unavailable	= 0,
	TractionControlStatus_off	= 1,
	TractionControlStatus_on	= 2,
	TractionControlStatus_engaged	= 3
} e_TractionControlStatus;

/* TractionControlStatus */
typedef long	 TractionControlStatus_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_TractionControlStatus_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_TractionControlStatus;
extern const asn_INTEGER_specifics_t asn_SPC_TractionControlStatus_specs_1;
asn_struct_free_f TractionControlStatus_free;
asn_struct_print_f TractionControlStatus_print;
asn_constr_check_f TractionControlStatus_constraint;
ber_type_decoder_f TractionControlStatus_decode_ber;
der_type_encoder_f TractionControlStatus_encode_der;
xer_type_decoder_f TractionControlStatus_decode_xer;
xer_type_encoder_f TractionControlStatus_encode_xer;
oer_type_decoder_f TractionControlStatus_decode_oer;
oer_type_encoder_f TractionControlStatus_encode_oer;
per_type_decoder_f TractionControlStatus_decode_uper;
per_type_encoder_f TractionControlStatus_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _TractionControlStatus_H_ */
#include "asn_internal.h"
