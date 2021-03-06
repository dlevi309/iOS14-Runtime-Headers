/*
* Generated on Thursday, January 14, 2021 at 2:28:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/

#import <TSUtility/TSULogContext.h>

@class NSString;

@interface TSUURLTrackerLogContext : NSObject <TSULogContext> {

	NSString* _publicString;

}

@property (readonly) NSString * publicString; 
@property (readonly) NSString * privateString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)privateString;
-(NSString *)publicString;
-(id)initWithURLTracker:(id)arg1 ;
@end

