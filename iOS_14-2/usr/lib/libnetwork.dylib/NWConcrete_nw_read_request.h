/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libobjc.A.dylib/OS_nw_read_request.h>

@protocol OS_dispatch_data, OS_nw_content_context, OS_nw_error, OS_nw_array;
@class NWConcrete_nw_connection, NSObject, NSString;

@interface NWConcrete_nw_read_request : NSObject <OS_nw_read_request> {

	NWConcrete_nw_read_request* next;
	NWConcrete_nw_read_request* tail;
	/*^block*/id data_completion;
	/*^block*/id data_multiple_completion;
	/*^block*/id buffer_completion;
	NWConcrete_nw_connection* connection;
	unsigned qos_class;
	int variant;
	unsigned long long min;
	unsigned long long max;
	unsigned long long progress;
	char* buffer;
	NSObject*<OS_dispatch_data> data;
	NSObject*<OS_nw_content_context> context;
	NSObject*<OS_nw_content_context> repliable_message;
	NSObject*<OS_nw_error> error;
	NSObject*<OS_nw_array> read_array;
	NSObject*<OS_nw_array> context_array;
	unsigned reported : 1;
	unsigned is_complete : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(void)dealloc;
@end
