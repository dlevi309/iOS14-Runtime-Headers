/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libboringssl.dylib
*/

#import <libboringssl.dylib/libboringssl.dylib-Structs.h>
#import <libobjc.A.dylib/OS_boringssl_ctx.h>

@protocol OS_nw_context, OS_xpc_object, OS_nw_array, OS_dispatch_queue, OS_nw_protocol_options, OS_nw_protocol_metadata;
@class boringssl_concrete_nw_protocol_boringssl, NSObject, boringssl_concrete_boringssl_session_cache, boringssl_concrete_boringssl_psk_cache, boringssl_concrete_boringssl_identity, boringssl_concrete_boringssl_session_state, NSString;

@interface boringssl_concrete_boringssl_ctx : NSObject <OS_boringssl_ctx> {

	boringssl_legacy_ctx* legacy_context;
	boringssl_concrete_nw_protocol_boringssl* boringssl_handle;
	NSObject*<OS_nw_context> async_context;
	boringssl_concrete_boringssl_session_cache* session_cache;
	boringssl_concrete_boringssl_psk_cache* psk_cache;
	unsigned short max_allowed_tls_version;
	unsigned short max_allowed_dtls_version;
	unsigned short min_allowed_tls_version;
	unsigned short min_allowed_dtls_version;
	unsigned short ssl_max_version;
	unsigned short ssl_min_version;
	NSObject*<OS_xpc_object> alpn_protocols;
	NSObject*<OS_nw_array> callbacks;
	char* subject_name;
	char* ciphersuite_configuration_string;
	char* experiment_identifier;
	boringssl_concrete_boringssl_identity* identity;
	NSObject*<OS_dispatch_queue> metrics_queue;
	/*^block*/id verify_block;
	NSObject*<OS_dispatch_queue> verify_queue;
	/*^block*/id challenge_block;
	NSObject*<OS_dispatch_queue> challenge_queue;
	/*^block*/id key_update_block;
	NSObject*<OS_dispatch_queue> key_update_queue;
	/*^block*/id session_update_block;
	NSObject*<OS_dispatch_queue> session_update_queue;
	NSObject*<OS_dispatch_queue> private_key_queue;
	/*^block*/id private_key_sign_block;
	/*^block*/id private_key_decrypt_block;
	NSObject*<OS_dispatch_queue> handshake_message_callback_queue;
	/*^block*/id handshake_message_callback;
	sockaddr_in_4_6 remote_address;
	unsigned char connection_id[16];
	/*^block*/id alert_callback;
	/*^block*/id connected_callback;
	int internal_error;
	int ssl_state;
	int current_handshake_state;
	unsigned char current_handshake_type;
	boringssl_ctx_alert ssl_alert;
	BOOL peer_trust_result;
	int peer_trust_evaluation_error;
	unsigned long long handshake_timer_fires;
	unsigned short certificate_compression_algorithm;
	_SecKey* peer_public_key;
	CFArrayRef peer_cert_chain;
	SecTrustRef peer_trust_ref;
	boringssl_concrete_boringssl_session_state* session_state;
	ssl_stRef ssl_session;
	ssl_ctx_stRef ssl_ctx;
	/*^block*/id handshake_state_callback;
	unsigned long long handshake_start;
	unsigned long long handshake_end;
	unsigned long long current_flight_time;
	unsigned long long total_flight_time;
	unsigned short round_trips;
	unsigned long long outbound_byte_count;
	unsigned long long inbound_byte_count;
	unsigned long long write_stalls;
	unsigned long long read_stalls;
	unsigned long long async_count;
	NSObject*<OS_nw_protocol_options> options;
	NSObject*<OS_nw_protocol_metadata> metadata;
	unsigned long long minimum_rsa_key_size;
	unsigned long long minimum_ecdsa_key_size;
	unsigned minimum_signature_algorithm;
	int encryption_read_level;
	int encryption_write_level;
	unsigned started_flight : 1;
	unsigned cancelled : 1;
	unsigned sct_enable : 1;
	unsigned ocsp_enable : 1;
	unsigned server : 1;
	unsigned dtls : 1;
	unsigned fallback_mode : 1;
	unsigned false_start_enabled : 1;
	unsigned false_start_used : 1;
	unsigned allow_server_identity_change : 1;
	unsigned cert_lookup_done : 1;
	unsigned trust_invalid_certs : 1;
	unsigned session_ticket_enabled : 1;
	unsigned npn_enabled : 1;
	unsigned alpn_enabled : 1;
	unsigned resumed : 1;
	unsigned renewed : 1;
	unsigned flight_direction : 1;
	unsigned peer_verified : 1;
	unsigned peer_verification_in_progress : 1;
	unsigned received_certificate_request : 1;
	unsigned recovered_session : 1;
	unsigned tried_resumption : 1;
	unsigned offered_ticket : 1;
	unsigned early_data_enabled : 1;
	unsigned enforce_ev : 1;
	unsigned is_probe : 1;
	unsigned ats_enforced : 1;
	unsigned trust_evaluation_complete : 1;
	unsigned certificate_compression_enabled : 1;
	unsigned certificate_compression_used : 1;
	unsigned psk_negotiated : 1;
	unsigned grease_enabled : 1;
	unsigned tls13_aesgcm_enabled : 1;
	unsigned tls13_chacha20poly1305_enabled : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
@end
