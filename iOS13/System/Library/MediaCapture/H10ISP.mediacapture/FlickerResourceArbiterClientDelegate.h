/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/MediaCapture/H10ISP.mediacapture
*/

#import <H10ISP.mediacapture/H10ISP.mediacapture-Structs.h>
#import <libobjc.A.dylib/ResourceArbiterClientDelegate.h>

@class ResourceArbiterClient, NSString;

@interface FlickerResourceArbiterClientDelegate : NSObject <ResourceArbiterClientDelegate> {

	ResourceArbiterClient* _arbiterClient;
	H10ISPFlickerDetectorContext* _flickerContext;

}

@property (nonatomic,readonly) ResourceArbiterClient * arbiterClient;                   //@synthesize arbiterClient=_arbiterClient - In the implementation block
@property (assign,nonatomic) H10ISPFlickerDetectorContext* flickerContext;              //@synthesize flickerContext=_flickerContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)cleanup;
-(void)releaseResourceAccess;
-(ResourceArbiterClient *)arbiterClient;
-(void)resourceAccessResult:(BOOL)arg1 ;
-(void)resourceAccessRevoked;
-(void)requestResourceAccess;
-(H10ISPFlickerDetectorContext*)flickerContext;
-(void)setFlickerContext:(H10ISPFlickerDetectorContext*)arg1 ;
@end

