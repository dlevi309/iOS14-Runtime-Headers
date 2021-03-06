/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/


@protocol AKAnisetteServiceProtocol;
@class NSXPCConnection, NSLock, NSXPCListenerEndpoint, AKDevice;

@interface AKAnisetteProvisioningController : NSObject {

	NSXPCConnection* _anisetteServiceConnection;
	NSLock* _connectionLock;
	NSXPCListenerEndpoint* _daemonXPCEndpoint;
	AKDevice* _targetDevice;
	id<AKAnisetteServiceProtocol> _anisetteDataProvider;

}

@property (nonatomic,retain) AKDevice * targetDevice;                                         //@synthesize targetDevice=_targetDevice - In the implementation block
@property (nonatomic,retain) id<AKAnisetteServiceProtocol> anisetteDataProvider;              //@synthesize anisetteDataProvider=_anisetteDataProvider - In the implementation block
-(AKDevice *)targetDevice;
-(void)eraseWithCompletion:(/*^block*/id)arg1 ;
-(void)setAnisetteDataProvider:(id<AKAnisetteServiceProtocol>)arg1 ;
-(void)anisetteDataWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)legacyAnisetteDataForDSID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id<AKAnisetteServiceProtocol>)anisetteDataProvider;
-(void)anisetteDataForURLRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)provisionWithCompletion:(/*^block*/id)arg1 ;
-(id)anisetteDataWithError:(id*)arg1 ;
-(void)syncWithSIMData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setTargetDevice:(AKDevice *)arg1 ;
-(id)initWithDaemonXPCEndpoint:(id)arg1 ;
-(id)_anisetteServiceConnection;
-(id)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)arg1 error:(id*)arg2 ;
-(id)anisetteDataForURLRequest:(id)arg1 error:(id*)arg2 ;
-(void)fetchAttestationForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initForDevice:(id)arg1 provider:(id)arg2 ;
-(void)dealloc;
@end

