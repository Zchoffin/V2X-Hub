/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_ASN_CC.asn"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted -fskeletons-copy`
 */

#ifndef	_DistanceUnits_H_
#define	_DistanceUnits_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DistanceUnits {
	DistanceUnits_centimeter	= 0,
	DistanceUnits_cm2_5	= 1,
	DistanceUnits_decimeter	= 2,
	DistanceUnits_meter	= 3,
	DistanceUnits_kilometer	= 4,
	DistanceUnits_foot	= 5,
	DistanceUnits_yard	= 6,
	DistanceUnits_mile	= 7
} e_DistanceUnits;

/* DistanceUnits */
typedef long	 DistanceUnits_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_DistanceUnits_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_DistanceUnits;
extern const asn_INTEGER_specifics_t asn_SPC_DistanceUnits_specs_1;
asn_struct_free_f DistanceUnits_free;
asn_struct_print_f DistanceUnits_print;
asn_constr_check_f DistanceUnits_constraint;
ber_type_decoder_f DistanceUnits_decode_ber;
der_type_encoder_f DistanceUnits_encode_der;
xer_type_decoder_f DistanceUnits_decode_xer;
xer_type_encoder_f DistanceUnits_encode_xer;
oer_type_decoder_f DistanceUnits_decode_oer;
oer_type_encoder_f DistanceUnits_encode_oer;
per_type_decoder_f DistanceUnits_decode_uper;
per_type_encoder_f DistanceUnits_encode_uper;
per_type_decoder_f DistanceUnits_decode_aper;
per_type_encoder_f DistanceUnits_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _DistanceUnits_H_ */
#include "asn_internal.h"
