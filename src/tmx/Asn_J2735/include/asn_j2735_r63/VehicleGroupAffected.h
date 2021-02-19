/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITIS"
 * 	found in "J2735_201603.asn1"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
 */

#ifndef	_VehicleGroupAffected_H_
#define	_VehicleGroupAffected_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum VehicleGroupAffected {
	VehicleGroupAffected_all_vehicles	= 9217,
	VehicleGroupAffected_bicycles	= 9218,
	VehicleGroupAffected_motorcycles	= 9219,
	VehicleGroupAffected_cars	= 9220,
	VehicleGroupAffected_light_vehicles	= 9221,
	VehicleGroupAffected_cars_and_light_vehicles	= 9222,
	VehicleGroupAffected_cars_with_trailers	= 9223,
	VehicleGroupAffected_cars_with_recreational_trailers	= 9224,
	VehicleGroupAffected_vehicles_with_trailers	= 9225,
	VehicleGroupAffected_heavy_vehicles	= 9226,
	VehicleGroupAffected_trucks	= 9227,
	VehicleGroupAffected_buses	= 9228,
	VehicleGroupAffected_articulated_buses	= 9229,
	VehicleGroupAffected_school_buses	= 9230,
	VehicleGroupAffected_vehicles_with_semi_trailers	= 9231,
	VehicleGroupAffected_vehicles_with_double_trailers	= 9232,
	VehicleGroupAffected_high_profile_vehicles	= 9233,
	VehicleGroupAffected_wide_vehicles	= 9234,
	VehicleGroupAffected_long_vehicles	= 9235,
	VehicleGroupAffected_hazardous_loads	= 9236,
	VehicleGroupAffected_exceptional_loads	= 9237,
	VehicleGroupAffected_abnormal_loads	= 9238,
	VehicleGroupAffected_convoys	= 9239,
	VehicleGroupAffected_maintenance_vehicles	= 9240,
	VehicleGroupAffected_delivery_vehicles	= 9241,
	VehicleGroupAffected_vehicles_with_even_numbered_license_plates	= 9242,
	VehicleGroupAffected_vehicles_with_odd_numbered_license_plates	= 9243,
	VehicleGroupAffected_vehicles_with_parking_permits	= 9244,
	VehicleGroupAffected_vehicles_with_catalytic_converters	= 9245,
	VehicleGroupAffected_vehicles_without_catalytic_converters	= 9246,
	VehicleGroupAffected_gas_powered_vehicles	= 9247,
	VehicleGroupAffected_diesel_powered_vehicles	= 9248,
	VehicleGroupAffected_lPG_vehicles	= 9249,
	VehicleGroupAffected_military_convoys	= 9250,
	VehicleGroupAffected_military_vehicles	= 9251
	/*
	 * Enumeration is extensible
	 */
} e_VehicleGroupAffected;

/* VehicleGroupAffected */
typedef long	 VehicleGroupAffected_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_VehicleGroupAffected_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_VehicleGroupAffected;
extern const asn_INTEGER_specifics_t asn_SPC_VehicleGroupAffected_specs_1;
asn_struct_free_f VehicleGroupAffected_free;
asn_struct_print_f VehicleGroupAffected_print;
asn_constr_check_f VehicleGroupAffected_constraint;
ber_type_decoder_f VehicleGroupAffected_decode_ber;
der_type_encoder_f VehicleGroupAffected_encode_der;
xer_type_decoder_f VehicleGroupAffected_decode_xer;
xer_type_encoder_f VehicleGroupAffected_encode_xer;
oer_type_decoder_f VehicleGroupAffected_decode_oer;
oer_type_encoder_f VehicleGroupAffected_encode_oer;
per_type_decoder_f VehicleGroupAffected_decode_uper;
per_type_encoder_f VehicleGroupAffected_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _VehicleGroupAffected_H_ */
#include "asn_internal.h"
