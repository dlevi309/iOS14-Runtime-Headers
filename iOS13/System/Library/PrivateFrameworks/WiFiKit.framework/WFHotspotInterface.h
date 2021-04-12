/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

#import <libobjc.A.dylib/SFRemoteHotspotSessionDelegate.h>

@protocol WFHotspotInterfaceDelegate, OS_dispatch_queue;
@class NSSet, NSObject, SFRemoteHotspotSession, NSString;

@interface WFHotspotInterface : NSObject <SFRemoteHotspotSessionDelegate> {

	BOOL _scanning;
	NSSet* _networks;
	id<WFHotspotInterfaceDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _internalQueue;
	SFRemoteHotspotSession* _hotspotSession;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (assign,getter=isScanning,nonatomic) BOOL scanning;                         //@synthesize scanning=_scanning - In the implementation block
@property (retain) NSSet * networks;                                                  //@synthesize networks=_networks - In the implementation block
@property (retain) SFRemoteHotspotSession * hotspotSession;                           //@synthesize hotspotSession=_hotspotSession - In the implementation block
@property (__weak) id<WFHotspotInterfaceDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<WFHotspotInterfaceDelegate>)delegate;
-(void)setDelegate:(id<WFHotspotInterfaceDelegate>)arg1 ;
-(NSSet *)networks;
-(void)setNetworks:(NSSet *)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)stopBrowsing;
-(void)startBrowsing;
-(void)session:(id)arg1 updatedFoundDevices:(id)arg2 ;
-(BOOL)isScanning;
-(void)setScanning:(BOOL)arg1 ;
-(id)enableHotspot:(id)arg1 error:(out id*)arg2 ;
-(SFRemoteHotspotSession *)hotspotSession;
-(void)_stopBrowsingRemoveCache:(BOOL)arg1 ;
-(void)updateNetworksWithHotspots:(id)arg1 ;
-(void)setHotspotSession:(SFRemoteHotspotSession *)arg1 ;
@end
