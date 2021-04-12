/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_endpoint_handler.h>

@protocol OS_nw_object, OS_nw_endpoint, OS_nw_parameters, OS_nw_association, OS_nw_path, OS_xpc_object, NWConcrete_nw_endpoint_mode_handler, OS_nw_path_evaluator;
@class NSObject, NSString;

@interface NWConcrete_nw_endpoint_handler : NSObject <OS_nw_endpoint_handler> {

	/*function pointer*/void* report_callback;
	NSObject*<OS_nw_object> callback_context;
	NSObject*<OS_nw_endpoint> endpoint;
	NSObject*<OS_nw_parameters> parameters;
	NSObject*<OS_nw_association> association;
	NSObject*<OS_nw_path> current_path;
	NWConcrete_nw_endpoint_handler* parent_handler;
	nw_endpoint_handler_event_s event;
	NSObject*<OS_xpc_object> inactive_agent_uuids;
	NSObject*<OS_xpc_object> inactive_agent_dictionaries;
	NSObject*<OS_xpc_object> triggered_agent_uuids;
	os_unfair_lock_s lock;
	int mode;
	int state;
	unsigned long long start_time;
	void* fallback_timer;
	unsigned top_id;
	AI last_child_id;
	unsigned char id_chain[16];
	char id_str[75];
	NSObject*<NWConcrete_nw_endpoint_mode_handler> mode_handler;
	NSObject*<OS_nw_path_evaluator> override_evaluator;
	unsigned dry_run : 1;
	unsigned triggering_voluntary_agents : 1;
	unsigned reuse_association : 1;
	unsigned has_better_path : 1;
	unsigned has_finished_transport : 1;
	unsigned logging_disabled : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
@end
