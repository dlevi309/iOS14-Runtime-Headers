/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <PBBridgeSupport/PBBridgeIDSServiceDelegate.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>
#import <libobjc.A.dylib/RUILoaderDelegate.h>
#import <PBBridgeSupport/PBBridgeCompanionProtocol.h>

@protocol OS_dispatch_queue, RUILoaderDelegate, PBBridgeConnectionDelegate, OS_dispatch_source;
@class NSObject, RUIStyle, NSURLConnection, NSMutableURLRequest, NSMutableData, RUILoader, NSString, NSDictionary, NSMutableDictionary;

@interface PBBridgeCompanionController : PBBridgeIDSServiceDelegate <IDSServiceDelegate, NSURLConnectionDelegate, RUILoaderDelegate, PBBridgeCompanionProtocol> {

	MKBAssertionRef _unlockPairingAssertion;
	NSObject*<OS_dispatch_queue> _timeoutTrackerQueue;
	BOOL _nonSilentActivation;
	BOOL _connectionFailed;
	BOOL _awaitingCustomResponse;
	BOOL _isEstablishingPairing;
	BOOL _allowAnyHTTPSCertificate;
	BOOL _sentSessionRequest;
	BOOL _sentActivationRequest;
	BOOL _passcodeSet;
	BOOL _selectedPairedUnlock;
	unsigned short _granularActivationState;
	int _activationState;
	int _activationRetries;
	RUIStyle* _remoteUIStyle;
	id<RUILoaderDelegate> _ruiDelegate;
	id<PBBridgeConnectionDelegate> _delegate;
	NSURLConnection* _activationConnection;
	NSMutableURLRequest* _activationRequest;
	NSMutableData* _activationData;
	RUILoader* _ruiLoader;
	NSString* _contentType;
	NSDictionary* _allHeaders;
	NSObject*<OS_dispatch_source> _activationTimeout;
	NSString* _internalLastSendMessageID;
	NSString* _remoteActivationUserAgent;
	/*^block*/id _lockedOnAnimationCompletion;
	/*^block*/id _initialSyncPrepCompletion;
	/*^block*/id _languageLocaleCompletion;
	/*^block*/id _prepareWatchForForcedSUCompletion;
	/*^block*/id _remoteAccountForDeviceCompletion;
	/*^block*/id _tinkerCredentialsIngestedCompletion;
	/*^block*/id _tinkerWiFiCredentialsIngestedCompletion;
	/*^block*/id _buysOnWatchCredentialsIngestedCompletion;
	NSMutableDictionary* _reportMapping;

}

@property (nonatomic,retain) NSURLConnection * activationConnection;                       //@synthesize activationConnection=_activationConnection - In the implementation block
@property (nonatomic,retain) NSMutableURLRequest * activationRequest;                      //@synthesize activationRequest=_activationRequest - In the implementation block
@property (nonatomic,retain) NSMutableData * activationData;                               //@synthesize activationData=_activationData - In the implementation block
@property (nonatomic,retain) RUILoader * ruiLoader;                                        //@synthesize ruiLoader=_ruiLoader - In the implementation block
@property (nonatomic,copy) NSString * contentType;                                         //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,retain) NSDictionary * allHeaders;                                    //@synthesize allHeaders=_allHeaders - In the implementation block
@property (assign,nonatomic) BOOL nonSilentActivation;                                     //@synthesize nonSilentActivation=_nonSilentActivation - In the implementation block
@property (assign,nonatomic) BOOL connectionFailed;                                        //@synthesize connectionFailed=_connectionFailed - In the implementation block
@property (assign,nonatomic) BOOL awaitingCustomResponse;                                  //@synthesize awaitingCustomResponse=_awaitingCustomResponse - In the implementation block
@property (assign,nonatomic) int activationState;                                          //@synthesize activationState=_activationState - In the implementation block
@property (assign,nonatomic) BOOL isEstablishingPairing;                                   //@synthesize isEstablishingPairing=_isEstablishingPairing - In the implementation block
@property (assign,nonatomic) unsigned short granularActivationState;                       //@synthesize granularActivationState=_granularActivationState - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> activationTimeout;              //@synthesize activationTimeout=_activationTimeout - In the implementation block
@property (nonatomic,retain) NSString * internalLastSendMessageID;                         //@synthesize internalLastSendMessageID=_internalLastSendMessageID - In the implementation block
@property (assign,nonatomic) BOOL allowAnyHTTPSCertificate;                                //@synthesize allowAnyHTTPSCertificate=_allowAnyHTTPSCertificate - In the implementation block
@property (nonatomic,copy) NSString * remoteActivationUserAgent;                           //@synthesize remoteActivationUserAgent=_remoteActivationUserAgent - In the implementation block
@property (nonatomic,copy) id lockedOnAnimationCompletion;                                 //@synthesize lockedOnAnimationCompletion=_lockedOnAnimationCompletion - In the implementation block
@property (nonatomic,copy) id initialSyncPrepCompletion;                                   //@synthesize initialSyncPrepCompletion=_initialSyncPrepCompletion - In the implementation block
@property (nonatomic,copy) id languageLocaleCompletion;                                    //@synthesize languageLocaleCompletion=_languageLocaleCompletion - In the implementation block
@property (nonatomic,copy) id prepareWatchForForcedSUCompletion;                           //@synthesize prepareWatchForForcedSUCompletion=_prepareWatchForForcedSUCompletion - In the implementation block
@property (nonatomic,copy) id remoteAccountForDeviceCompletion;                            //@synthesize remoteAccountForDeviceCompletion=_remoteAccountForDeviceCompletion - In the implementation block
@property (nonatomic,copy) id tinkerCredentialsIngestedCompletion;                         //@synthesize tinkerCredentialsIngestedCompletion=_tinkerCredentialsIngestedCompletion - In the implementation block
@property (nonatomic,copy) id tinkerWiFiCredentialsIngestedCompletion;                     //@synthesize tinkerWiFiCredentialsIngestedCompletion=_tinkerWiFiCredentialsIngestedCompletion - In the implementation block
@property (nonatomic,copy) id buysOnWatchCredentialsIngestedCompletion;                    //@synthesize buysOnWatchCredentialsIngestedCompletion=_buysOnWatchCredentialsIngestedCompletion - In the implementation block
@property (assign,nonatomic) BOOL sentSessionRequest;                                      //@synthesize sentSessionRequest=_sentSessionRequest - In the implementation block
@property (assign,nonatomic) BOOL sentActivationRequest;                                   //@synthesize sentActivationRequest=_sentActivationRequest - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * reportMapping;                          //@synthesize reportMapping=_reportMapping - In the implementation block
@property (assign,nonatomic) BOOL passcodeSet;                                             //@synthesize passcodeSet=_passcodeSet - In the implementation block
@property (assign,nonatomic) BOOL selectedPairedUnlock;                                    //@synthesize selectedPairedUnlock=_selectedPairedUnlock - In the implementation block
@property (assign,nonatomic) int activationRetries;                                        //@synthesize activationRetries=_activationRetries - In the implementation block
@property (nonatomic,retain) RUIStyle * remoteUIStyle;                                     //@synthesize remoteUIStyle=_remoteUIStyle - In the implementation block
@property (assign,nonatomic,__weak) id<RUILoaderDelegate> ruiDelegate;                     //@synthesize ruiDelegate=_ruiDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<PBBridgeConnectionDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)iCloudFirstName:(id*)arg1 lastName:(id*)arg2 ;
+(void)meCardFirstName:(id*)arg1 lastName:(id*)arg2 ;
+(id)displayNameWithFirstName:(id)arg1 lastName:(id)arg2 ;
-(void)_cleanup;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)setRemoteUIStyle:(RUIStyle *)arg1 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(id)init;
-(int)activationState;
-(id<PBBridgeConnectionDelegate>)delegate;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(NSString *)contentType;
-(void)loader:(id)arg1 didReceiveHTTPResponse:(id)arg2 ;
-(void)loader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(unsigned long long)arg3 ;
-(id)viewControllerForAlertPresentation;
-(RUIStyle *)remoteUIStyle;
-(void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3 ;
-(void)setDelegate:(id<PBBridgeConnectionDelegate>)arg1 ;
-(id)serviceIdentifier;
-(NSMutableData *)activationData;
-(void)setActivationData:(NSMutableData *)arg1 ;
-(void)setContentType:(NSString *)arg1 ;
-(void)setPasscodeSet:(BOOL)arg1 ;
-(void)setActivationState:(int)arg1 ;
-(NSDictionary *)allHeaders;
-(void)endSetupTransaction;
-(BOOL)_sendRemoteCommandWithMessageID:(unsigned short)arg1 withArguments:(id)arg2 ;
-(BOOL)_sendResponseToMessage:(id)arg1 withResponseMessageID:(unsigned short)arg2 withArguments:(id)arg3 ;
-(void)transportBecameReachable;
-(void)transportBecameUnreachable;
-(void)setupServiceMessageSelectorMappings;
-(id)customDescriptionOfMessageType:(unsigned short)arg1 ;
-(NSObject*<OS_dispatch_source>)activationTimeout;
-(void)setActivationTimeout:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSString *)internalLastSendMessageID;
-(void)setInternalLastSendMessageID:(NSString *)arg1 ;
-(void)beginSetupTransaction;
-(void)gizmoBecameAvailableWantsConfirmation:(id)arg1 ;
-(void)sendProxyActivationRequest:(id)arg1 ;
-(void)gizmoDidBeginActivating:(id)arg1 ;
-(void)gizmoDidFinishActivating:(id)arg1 ;
-(void)getCompanionLanguage:(id)arg1 ;
-(void)getCompanionRegion:(id)arg1 ;
-(void)gizmoDidEndPasscodeCreation:(id)arg1 ;
-(void)gizmoDidEndPasscodeChange:(id)arg1 ;
-(void)gizmoDidBeginUnlockPairing:(id)arg1 ;
-(void)gizmoDidEndUnlockPairing:(id)arg1 ;
-(void)getSiriState:(id)arg1 ;
-(void)gizmoActivationFailed:(id)arg1 ;
-(void)handlePerformanceResults:(id)arg1 ;
-(void)handleWarrantySentinelResponse:(id)arg1 ;
-(void)handleOfflineTermsResponse:(id)arg1 ;
-(void)gizmoFailedToCreatePasscode:(id)arg1 ;
-(void)watchDidPrepareForInitialSync:(id)arg1 ;
-(void)watchDidRespondWithLanguageAndLocaleStatus:(id)arg1 ;
-(void)watchDidIngestWirelessCredentials:(id)arg1 ;
-(void)watchDidPrepareForForcedSU:(id)arg1 ;
-(void)handleRemoteActivationDetails:(id)arg1 ;
-(void)returnedRemoteAccountForDevice:(id)arg1 ;
-(void)tinkerWatchIngestedCredentials:(id)arg1 ;
-(void)tinkerFinishedHealthSharingOptIn:(id)arg1 ;
-(void)acknowledgeBuysOnWatchCredentialIngestion:(id)arg1 ;
-(void)invalidateTimeoutTimerWithNewActivationGranularState:(unsigned short)arg1 ;
-(double)offsetEventTime;
-(void)refreshTimeoutTimerWithNewActivationGranularState:(unsigned short)arg1 ;
-(void)setReporter:(id)arg1 forConnection:(id)arg2 ;
-(BOOL)_dumpActivationResquests;
-(id)_connectionWithRequest:(id)arg1 ;
-(id)reporterForConnection:(id)arg1 ;
-(unsigned short)_testActivationResponseType;
-(void)tellGizmoToBeginActivation;
-(void)activationTimedOut;
-(id)currentNetworks:(BOOL)arg1 ;
-(void)enableSiriForGizmo:(id)arg1 ;
-(void)tellWatchLanguagesAndLocaleWithCompletion:(/*^block*/id)arg1 ;
-(void)beganWaitingForPresentationOfActivationEvent;
-(void)beganWaitingForUserResponseToActivationEvent;
-(void)sendProxyActivationWithCustomRequest:(id)arg1 ;
-(void)sendGizmoPasscodeRestrictions;
-(void)tellGizmoToSetDiagnosticsEnabled:(BOOL)arg1 ;
-(void)tellGizmoToSetLocationEnabled:(BOOL)arg1 ;
-(void)tellGizmoToSetFitnessRouteTrackingEnabled:(BOOL)arg1 ;
-(void)tellWatchToSetSiriEnabled:(BOOL)arg1 ;
-(void)tellGizmoToSetMessagesinCloudEnabled:(BOOL)arg1 ;
-(void)tellGizmoToPushControllerType:(unsigned long long)arg1 ;
-(void)tellGizmoToPopToControllerType:(unsigned long long)arg1 ;
-(void)tellGizmoToShowLockedOnAnimationTimeToFlash:(double)arg1 animationCompletion:(/*^block*/id)arg2 ;
-(void)tellGizmoToSeCrownOrientationRight:(BOOL)arg1 ;
-(void)tellGizmoToUpdateSyncProgressTo:(double)arg1 withState:(long long)arg2 ;
-(void)startEstablishingPairing;
-(void)tellGizmoToRetryActivation;
-(void)tellGizmoToKeepAliveForActivationEvent;
-(void)queryGizmoForShowWarrantySentinelAndRestoreDeviceName:(id)arg1 ;
-(void)tellGizmoToDeleteWarrantySentinel;
-(void)tellGizmoToPrepareForInitialSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)queryGizmoForOfflineTerms;
-(void)tellWatchToChangeDeviceNameFor:(id)arg1 ;
-(void)sendDemoWatchWirelessCredentials;
-(void)sendAllTinkerWirelessCredentials:(BOOL)arg1 ;
-(id)currentWiFiNetworkName;
-(void)tellWatchToPrepareForForcedSUWithCompletion:(/*^block*/id)arg1 ;
-(void)sendBuysOnWatchUsername:(id)arg1 andPassword:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)requestProxiedDeviceForWatchWithCompletion:(/*^block*/id)arg1 ;
-(void)sendComputedTimeZoneToGizmo;
-(void)sendTinkerAccountCredentialsWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<RUILoaderDelegate>)ruiDelegate;
-(void)setRuiDelegate:(id<RUILoaderDelegate>)arg1 ;
-(NSURLConnection *)activationConnection;
-(void)setActivationConnection:(NSURLConnection *)arg1 ;
-(NSMutableURLRequest *)activationRequest;
-(void)setActivationRequest:(NSMutableURLRequest *)arg1 ;
-(RUILoader *)ruiLoader;
-(void)setRuiLoader:(RUILoader *)arg1 ;
-(void)setAllHeaders:(NSDictionary *)arg1 ;
-(BOOL)nonSilentActivation;
-(void)setNonSilentActivation:(BOOL)arg1 ;
-(BOOL)connectionFailed;
-(void)setConnectionFailed:(BOOL)arg1 ;
-(BOOL)awaitingCustomResponse;
-(void)setAwaitingCustomResponse:(BOOL)arg1 ;
-(BOOL)isEstablishingPairing;
-(void)setIsEstablishingPairing:(BOOL)arg1 ;
-(unsigned short)granularActivationState;
-(void)setGranularActivationState:(unsigned short)arg1 ;
-(BOOL)allowAnyHTTPSCertificate;
-(void)setAllowAnyHTTPSCertificate:(BOOL)arg1 ;
-(NSString *)remoteActivationUserAgent;
-(void)setRemoteActivationUserAgent:(NSString *)arg1 ;
-(id)lockedOnAnimationCompletion;
-(void)setLockedOnAnimationCompletion:(id)arg1 ;
-(id)initialSyncPrepCompletion;
-(void)setInitialSyncPrepCompletion:(id)arg1 ;
-(id)languageLocaleCompletion;
-(void)setLanguageLocaleCompletion:(id)arg1 ;
-(id)prepareWatchForForcedSUCompletion;
-(void)setPrepareWatchForForcedSUCompletion:(id)arg1 ;
-(id)remoteAccountForDeviceCompletion;
-(void)setRemoteAccountForDeviceCompletion:(id)arg1 ;
-(id)tinkerCredentialsIngestedCompletion;
-(void)setTinkerCredentialsIngestedCompletion:(id)arg1 ;
-(id)tinkerWiFiCredentialsIngestedCompletion;
-(void)setTinkerWiFiCredentialsIngestedCompletion:(id)arg1 ;
-(id)buysOnWatchCredentialsIngestedCompletion;
-(void)setBuysOnWatchCredentialsIngestedCompletion:(id)arg1 ;
-(BOOL)sentSessionRequest;
-(void)setSentSessionRequest:(BOOL)arg1 ;
-(BOOL)sentActivationRequest;
-(void)setSentActivationRequest:(BOOL)arg1 ;
-(NSMutableDictionary *)reportMapping;
-(void)setReportMapping:(NSMutableDictionary *)arg1 ;
-(BOOL)passcodeSet;
-(BOOL)selectedPairedUnlock;
-(void)setSelectedPairedUnlock:(BOOL)arg1 ;
-(int)activationRetries;
-(void)setActivationRetries:(int)arg1 ;
@end
