/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_interface.h>

@class NSString;

@interface NWConcrete_nw_interface : NSObject <OS_nw_interface> {

	unsigned index;
	nw_interface_details details;
	unsigned delegate_index;
	unsigned generation;
	int type;
	int subtype;
	char name[25];

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
@end

