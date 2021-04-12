/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libobjc.A.dylib/OS_nw_socks5_connection.h>

@protocol OS_nw_socks5_server, OS_nw_connection, OS_dispatch_queue, OS_nw_path_evaluator, OS_nw_error;
@class NSObject, NSString;

@interface NWConcrete_nw_socks5_connection : NSObject <OS_nw_socks5_connection> {

	unsigned long long sc_id;
	NWConcrete_nw_socks5_connection* sc_internally_retained_object;
	NSObject*<OS_nw_socks5_server> sc_parent;
	NSObject*<OS_nw_connection> sc_in_connection;
	NSObject*<OS_dispatch_queue> sc_queue;
	/*^block*/id sc_cancel;
	unsigned char sc_state;
	unsigned char sc_out_address_type;
	NSObject*<OS_nw_path_evaluator> sc_prefer_wifi_path_evaluator;
	int sc_prefer_wifi_previous_path_status;
	SCD_Union_NW0* sc_out_address;
	unsigned short sc_shoes_request_length_hbo;
	unsigned char sc_out_address_domain_length;
	unsigned long long sc_busy_counter;
	unsigned long long sc_busy_start_time_nanos;
	unsigned long long sc_total_busy_time_nanos;
	unsigned long long sc_start_time_nanos;
	NSObject*<OS_nw_connection> sc_out_connection;
	NSObject*<OS_nw_error> sc_error;
	unsigned sc_out_connection_failed_or_sent_write_close : 1;
	unsigned sc_in_connection_failed_or_sent_write_close : 1;
	unsigned sc_out_disable_proxy : 1;
	unsigned sc_sent_reply : 1;
	unsigned sc_has_read_from_in_connection : 1;
	unsigned sc_out_udp : 1;
	unsigned sc_should_prefer_wifi : 1;
	unsigned long long sc_out_connection_bytes_read;
	unsigned long long sc_out_connection_bytes_written;
	unsigned long long sc_in_connection_bytes_read;
	unsigned long long sc_in_connection_bytes_written;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)dealloc;
@end
