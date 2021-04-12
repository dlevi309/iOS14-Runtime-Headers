/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSURLSessionAppleIDContext;
@class NSString, NSDictionary, NSArray, NSURL, NSData, NSNumber, NSURLCredentialStorage, NSURLCache, NSHTTPCookieStorage, _NSHSTSStorage, NSSet, _NSHTTPAlternativeServicesStorage;

@interface NSURLSessionConfiguration : NSObject <NSMutableCopying, NSSecureCoding, NSCopying> {

	BOOL _allowsCellularAccess;
	BOOL _allowsExpensiveNetworkAccess;
	BOOL _allowsConstrainedNetworkAccessAPI;
	BOOL _waitsForConnectivity;
	BOOL _discretionary;
	BOOL _sessionSendsLaunchEvents;
	BOOL _HTTPShouldUsePipelining;
	BOOL _HTTPShouldSetCookies;
	BOOL _shouldUseExtendedBackgroundIdleMode;
	BOOL _requiresPowerPluggedIn;
	BOOL _reportsDataStalls;
	BOOL _allowsExpensiveAccess;
	BOOL _allowsConstrainedNetworkAccessSPI;
	BOOL _allowsPowerNapScheduling;
	BOOL _preventsIdleSleepOnceConnected;
	BOOL _sessionSendsLaunchOnDemandEvents;
	BOOL _shouldSkipPreferredClientCertificateLookup;
	BOOL _allowsRetryForBackgroundDataTasks;
	BOOL _onBehalfOfPairedDevice;
	BOOL _clientIsNotExplicitlyDiscretionary;
	BOOL _respectsAllowsCellularAccessForDiscretionaryTasks;
	BOOL _overridesBackgroundSessionAutoRedirect;
	BOOL _performsEVCertCheck;
	BOOL _infersDiscretionaryFromOriginatingClient;
	BOOL _prefersInfraWiFi;
	BOOL _allowsMultipathTCP;
	BOOL _allowsResponseMonitoringDuringBodyTranmission;
	BOOL _allowsIndefiniteConnections;
	BOOL _allowsTCPFastOpen;
	BOOL _allowsTLSSessionTickets;
	BOOL _allowsTLSSessionResumption;
	BOOL _allowsTLSFalseStart;
	BOOL _allowsTLSFallback;
	BOOL _preventsDirectWiFiAccess;
	BOOL _allowTCPIOConnectionStreamTask;
	BOOL _preventsSystemHTTPProxyAuthentication;
	BOOL _requiresSecureHTTPSProxyConnection;
	BOOL _preventsAppSSO;
	BOOL _allowsReachabilityCheck;
	BOOL _duetPreauthorized;
	BOOL _requiresSustainedDataDelivery;
	BOOL _ignoreDidReceiveResponseDisposition;
	BOOL _alwaysPerformDefaultTrustEvaluation;
	BOOL _backgroundSession;
	BOOL _phskip_credStorageSet;
	BOOL _phskip_urlCacheSet;
	BOOL _phskip_cookieStorageSet;
	BOOL _phskip_hstsStorageSet;
	BOOL _skip_download_unlink;
	BOOL _requiresClientToOpenFiles;
	BOOL _forcesNewConnections;
	BOOL _supportsAVAssetDownloads;
	BOOL _proxySession;
	BOOL _preventsIdleSleep;
	BOOL _usePipeliningHeuristics;
	BOOL _shouldPreserveBackgroundSessionDisposition;
	BOOL _disablesOutOfProcessDirectWiFiUsage;
	BOOL _disablesUseOfProxySession;
	BOOL _allowsHTTP3;
	BOOL _phskip_alternativeServicesStorageSet;
	BOOL __allowsWCA;
	int _TLSMinimumSupportedProtocol;
	int _TLSMaximumSupportedProtocol;
	int _loggingPrivacyLevel;
	NSString* _identifier;
	unsigned long long _requestCachePolicy;
	double _timeoutIntervalForRequest;
	double _timeoutIntervalForResource;
	unsigned long long _networkServiceType;
	NSString* _sharedContainerIdentifier;
	NSDictionary* _connectionProxyDictionary;
	unsigned long long _HTTPCookieAcceptPolicy;
	NSDictionary* _HTTPAdditionalHeaders;
	long long _HTTPMaximumConnectionsPerHost;
	NSArray* _protocolClasses;
	long long _multipathServiceType;
	NSURL* _directoryForDownloadedFiles;
	NSString* _sourceApplicationBundleIdentifier;
	NSString* _sourceApplicationSecondaryIdentifier;
	NSData* _sourceApplicationAuditTokenData;
	unsigned long long _TCPAdaptiveReadTimeout;
	unsigned long long _TCPAdaptiveWriteTimeout;
	long long _timingDataOptions;
	id<NSURLSessionAppleIDContext> _appleIDContext;
	NSData* _atsContext;
	double _connectionCachePurgeTimeout;
	double _connectionCacheCellPurgeTimeout;
	double _longLivedConnectionCachePurgeTimeout;
	double _longLivedConnectionCacheCellPurgeTimeout;
	NSString* _connectionPoolName;
	NSString* _CTDataConnectionServiceType;
	NSString* _tlsTrustPinningPolicyName;
	unsigned long long _customReadBufferSize;
	double _customReadBufferTimeout;
	long long _duetPreClearedMode;
	long long _IDSMessageTimeout;
	NSNumber* _maximumWatchCellularTransferSize;
	unsigned long long _multipathAlternatePort;
	NSString* _disposition;
	NSURLCredentialStorage* _phskip_credStorage;
	NSURLCache* _phskip_urlCache;
	NSHTTPCookieStorage* _phskip_cookieStorage;
	_NSHSTSStorage* _phskip_hstsStorage;
	long long _pipeliningHighWatermark;
	long long _pipeliningLowWatermark;
	long long _numPriorityLevels;
	long long _numFastLanes;
	long long _minimumFastLanePriority;
	NSString* _tcpConnectionPoolName;
	NSDictionary* _socketStreamProperties;
	NSSet* _authenticatorStatusCodes;
	NSArray* _contentDispHeadEncFallback;
	NSString* _companionAppBundleIdentifier;
	NSString* _watchAppBundleIdentifier;
	NSString* _watchExtensionBundleIdentifier;
	unsigned long long _forcedNetworkServiceType;
	NSDictionary* _overriddenDelegateOptions;
	NSSet* _suppressedAutoAddedHTTPHeaders;
	long long _expiredDNSBehavior;
	_NSHTTPAlternativeServicesStorage* _phskip_alternativeServicesStorage;
	long long __companionProxyPreference;

}

@property (copy) NSString * identifier;                                                                 //@synthesize identifier=_identifier - In the implementation block
@property (getter=isBackgroundSession) BOOL backgroundSession;                                          //@synthesize backgroundSession=_backgroundSession - In the implementation block
@property (assign) NSString * disposition;                                                              //@synthesize disposition=_disposition - In the implementation block
@property (retain) NSURLCredentialStorage * _phskip_credStorage;                                        //@synthesize phskip_credStorage=_phskip_credStorage - In the implementation block
@property (assign) BOOL _phskip_credStorageSet;                                                         //@synthesize phskip_credStorageSet=_phskip_credStorageSet - In the implementation block
@property (retain) NSURLCache * _phskip_urlCache;                                                       //@synthesize phskip_urlCache=_phskip_urlCache - In the implementation block
@property (assign) BOOL _phskip_urlCacheSet;                                                            //@synthesize phskip_urlCacheSet=_phskip_urlCacheSet - In the implementation block
@property (retain) NSHTTPCookieStorage * _phskip_cookieStorage;                                         //@synthesize phskip_cookieStorage=_phskip_cookieStorage - In the implementation block
@property (assign) BOOL _phskip_cookieStorageSet;                                                       //@synthesize phskip_cookieStorageSet=_phskip_cookieStorageSet - In the implementation block
@property (retain) _NSHSTSStorage * _phskip_hstsStorage;                                                //@synthesize phskip_hstsStorage=_phskip_hstsStorage - In the implementation block
@property (assign) BOOL _phskip_hstsStorageSet;                                                         //@synthesize phskip_hstsStorageSet=_phskip_hstsStorageSet - In the implementation block
@property (assign) long long pipeliningHighWatermark;                                                   //@synthesize pipeliningHighWatermark=_pipeliningHighWatermark - In the implementation block
@property (assign) long long pipeliningLowWatermark;                                                    //@synthesize pipeliningLowWatermark=_pipeliningLowWatermark - In the implementation block
@property (assign) long long numPriorityLevels;                                                         //@synthesize numPriorityLevels=_numPriorityLevels - In the implementation block
@property (assign) long long numFastLanes;                                                              //@synthesize numFastLanes=_numFastLanes - In the implementation block
@property (assign) long long minimumFastLanePriority;                                                   //@synthesize minimumFastLanePriority=_minimumFastLanePriority - In the implementation block
@property (assign) BOOL skip_download_unlink;                                                           //@synthesize skip_download_unlink=_skip_download_unlink - In the implementation block
@property (assign) BOOL _requiresClientToOpenFiles;                                                     //@synthesize requiresClientToOpenFiles=_requiresClientToOpenFiles - In the implementation block
@property (copy) NSString * _tcpConnectionPoolName;                                                     //@synthesize tcpConnectionPoolName=_tcpConnectionPoolName - In the implementation block
@property (assign) BOOL _forcesNewConnections;                                                          //@synthesize forcesNewConnections=_forcesNewConnections - In the implementation block
@property (copy) NSDictionary * _socketStreamProperties;                                                //@synthesize socketStreamProperties=_socketStreamProperties - In the implementation block
@property (assign) BOOL _supportsAVAssetDownloads;                                                      //@synthesize supportsAVAssetDownloads=_supportsAVAssetDownloads - In the implementation block
@property (getter=_isProxySession) BOOL _proxySession;                                                  //@synthesize proxySession=_proxySession - In the implementation block
@property (copy) NSSet * _authenticatorStatusCodes;                                                     //@synthesize authenticatorStatusCodes=_authenticatorStatusCodes - In the implementation block
@property (assign) BOOL _preventsIdleSleep;                                                             //@synthesize preventsIdleSleep=_preventsIdleSleep - In the implementation block
@property (assign) BOOL _usePipeliningHeuristics;                                                       //@synthesize usePipeliningHeuristics=_usePipeliningHeuristics - In the implementation block
@property (copy) NSArray * _contentDispHeadEncFallback;                                                 //@synthesize contentDispHeadEncFallback=_contentDispHeadEncFallback - In the implementation block
@property (assign) BOOL _shouldPreserveBackgroundSessionDisposition;                                    //@synthesize shouldPreserveBackgroundSessionDisposition=_shouldPreserveBackgroundSessionDisposition - In the implementation block
@property (assign) BOOL _disablesOutOfProcessDirectWiFiUsage;                                           //@synthesize disablesOutOfProcessDirectWiFiUsage=_disablesOutOfProcessDirectWiFiUsage - In the implementation block
@property (assign) BOOL _disablesUseOfProxySession;                                                     //@synthesize disablesUseOfProxySession=_disablesUseOfProxySession - In the implementation block
@property (copy) NSString * _companionAppBundleIdentifier;                                              //@synthesize companionAppBundleIdentifier=_companionAppBundleIdentifier - In the implementation block
@property (copy) NSString * _watchAppBundleIdentifier;                                                  //@synthesize watchAppBundleIdentifier=_watchAppBundleIdentifier - In the implementation block
@property (copy) NSString * _watchExtensionBundleIdentifier;                                            //@synthesize watchExtensionBundleIdentifier=_watchExtensionBundleIdentifier - In the implementation block
@property (assign) unsigned long long _forcedNetworkServiceType;                                        //@synthesize forcedNetworkServiceType=_forcedNetworkServiceType - In the implementation block
@property (copy) NSDictionary * _overriddenDelegateOptions;                                             //@synthesize overriddenDelegateOptions=_overriddenDelegateOptions - In the implementation block
@property (retain) _NSHTTPAlternativeServicesStorage * _phskip_alternativeServicesStorage;              //@synthesize phskip_alternativeServicesStorage=_phskip_alternativeServicesStorage - In the implementation block
@property (assign) BOOL _phskip_alternativeServicesStorageSet;                                          //@synthesize phskip_alternativeServicesStorageSet=_phskip_alternativeServicesStorageSet - In the implementation block
@property (assign) BOOL _requiresPowerPluggedIn;                                                        //@synthesize requiresPowerPluggedIn=_requiresPowerPluggedIn - In the implementation block
@property (copy) NSURL * _directoryForDownloadedFiles;                                                  //@synthesize directoryForDownloadedFiles=_directoryForDownloadedFiles - In the implementation block
@property (copy) NSString * _sourceApplicationBundleIdentifier;                                         //@synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier - In the implementation block
@property (copy) NSString * _sourceApplicationSecondaryIdentifier;                                      //@synthesize sourceApplicationSecondaryIdentifier=_sourceApplicationSecondaryIdentifier - In the implementation block
@property (copy) NSData * _sourceApplicationAuditTokenData;                                             //@synthesize sourceApplicationAuditTokenData=_sourceApplicationAuditTokenData - In the implementation block
@property (assign) unsigned long long _TCPAdaptiveReadTimeout;                                          //@synthesize TCPAdaptiveReadTimeout=_TCPAdaptiveReadTimeout - In the implementation block
@property (assign) unsigned long long _TCPAdaptiveWriteTimeout;                                         //@synthesize TCPAdaptiveWriteTimeout=_TCPAdaptiveWriteTimeout - In the implementation block
@property (assign) BOOL _reportsDataStalls;                                                             //@synthesize reportsDataStalls=_reportsDataStalls - In the implementation block
@property (assign) BOOL _allowsExpensiveAccess;                                                         //@synthesize allowsExpensiveAccess=_allowsExpensiveAccess - In the implementation block
@property (assign) BOOL _allowsConstrainedNetworkAccess;                                                //@synthesize allowsConstrainedNetworkAccessSPI=_allowsConstrainedNetworkAccessSPI - In the implementation block
@property (assign) unsigned long long _multipathAlternatePort;                                          //@synthesize multipathAlternatePort=_multipathAlternatePort - In the implementation block
@property (assign) BOOL _allowsPowerNapScheduling;                                                      //@synthesize allowsPowerNapScheduling=_allowsPowerNapScheduling - In the implementation block
@property (assign) BOOL _preventsIdleSleepOnceConnected;                                                //@synthesize preventsIdleSleepOnceConnected=_preventsIdleSleepOnceConnected - In the implementation block
@property (assign) BOOL _sessionSendsLaunchOnDemandEvents;                                              //@synthesize sessionSendsLaunchOnDemandEvents=_sessionSendsLaunchOnDemandEvents - In the implementation block
@property (assign) long long _timingDataOptions;                                                        //@synthesize timingDataOptions=_timingDataOptions - In the implementation block
@property (assign) BOOL _shouldSkipPreferredClientCertificateLookup;                                    //@synthesize shouldSkipPreferredClientCertificateLookup=_shouldSkipPreferredClientCertificateLookup - In the implementation block
@property (copy) id<NSURLSessionAppleIDContext> _appleIDContext;                                        //@synthesize appleIDContext=_appleIDContext - In the implementation block
@property (copy) NSData * _atsContext;                                                                  //@synthesize atsContext=_atsContext - In the implementation block
@property (assign) double _connectionCachePurgeTimeout;                                                 //@synthesize connectionCachePurgeTimeout=_connectionCachePurgeTimeout - In the implementation block
@property (assign) double _connectionCacheCellPurgeTimeout;                                             //@synthesize connectionCacheCellPurgeTimeout=_connectionCacheCellPurgeTimeout - In the implementation block
@property (assign) double _longLivedConnectionCachePurgeTimeout;                                        //@synthesize longLivedConnectionCachePurgeTimeout=_longLivedConnectionCachePurgeTimeout - In the implementation block
@property (assign) double _longLivedConnectionCacheCellPurgeTimeout;                                    //@synthesize longLivedConnectionCacheCellPurgeTimeout=_longLivedConnectionCacheCellPurgeTimeout - In the implementation block
@property (assign) long long _connectionCacheNumPriorityLevels; 
@property (assign) long long _connectionCacheNumFastLanes; 
@property (assign) long long _connectionCacheMinimumFastLanePriority; 
@property (assign) BOOL _allowsRetryForBackgroundDataTasks;                                             //@synthesize allowsRetryForBackgroundDataTasks=_allowsRetryForBackgroundDataTasks - In the implementation block
@property (assign) BOOL _onBehalfOfPairedDevice;                                                        //@synthesize onBehalfOfPairedDevice=_onBehalfOfPairedDevice - In the implementation block
@property (assign) BOOL _clientIsNotExplicitlyDiscretionary;                                            //@synthesize clientIsNotExplicitlyDiscretionary=_clientIsNotExplicitlyDiscretionary - In the implementation block
@property (assign) BOOL _respectsAllowsCellularAccessForDiscretionaryTasks;                             //@synthesize respectsAllowsCellularAccessForDiscretionaryTasks=_respectsAllowsCellularAccessForDiscretionaryTasks - In the implementation block
@property (assign) BOOL _allowsWCA;                                                                     //@synthesize _allowsWCA=__allowsWCA - In the implementation block
@property (copy) NSNumber * _maximumWatchCellularTransferSize;                                          //@synthesize maximumWatchCellularTransferSize=_maximumWatchCellularTransferSize - In the implementation block
@property (assign) BOOL _overridesBackgroundSessionAutoRedirect;                                        //@synthesize overridesBackgroundSessionAutoRedirect=_overridesBackgroundSessionAutoRedirect - In the implementation block
@property (assign) BOOL _performsEVCertCheck;                                                           //@synthesize performsEVCertCheck=_performsEVCertCheck - In the implementation block
@property (assign) BOOL _infersDiscretionaryFromOriginatingClient;                                      //@synthesize infersDiscretionaryFromOriginatingClient=_infersDiscretionaryFromOriginatingClient - In the implementation block
@property (copy) NSString * _connectionPoolName;                                                        //@synthesize connectionPoolName=_connectionPoolName - In the implementation block
@property (assign) BOOL _prefersInfraWiFi;                                                              //@synthesize prefersInfraWiFi=_prefersInfraWiFi - In the implementation block
@property (assign) BOOL _allowsMultipathTCP;                                                            //@synthesize allowsMultipathTCP=_allowsMultipathTCP - In the implementation block
@property (assign) BOOL _allowsResponseMonitoringDuringBodyTranmission;                                 //@synthesize allowsResponseMonitoringDuringBodyTranmission=_allowsResponseMonitoringDuringBodyTranmission - In the implementation block
@property (assign) BOOL _allowsIndefiniteConnections;                                                   //@synthesize allowsIndefiniteConnections=_allowsIndefiniteConnections - In the implementation block
@property (copy) NSString * _CTDataConnectionServiceType;                                               //@synthesize CTDataConnectionServiceType=_CTDataConnectionServiceType - In the implementation block
@property (assign) BOOL _allowsTCPFastOpen;                                                             //@synthesize allowsTCPFastOpen=_allowsTCPFastOpen - In the implementation block
@property (assign) BOOL _allowsTLSSessionTickets;                                                       //@synthesize allowsTLSSessionTickets=_allowsTLSSessionTickets - In the implementation block
@property (assign) BOOL _allowsTLSSessionResumption;                                                    //@synthesize allowsTLSSessionResumption=_allowsTLSSessionResumption - In the implementation block
@property (assign) BOOL _allowsTLSFalseStart;                                                           //@synthesize allowsTLSFalseStart=_allowsTLSFalseStart - In the implementation block
@property (copy) NSString * _tlsTrustPinningPolicyName;                                                 //@synthesize tlsTrustPinningPolicyName=_tlsTrustPinningPolicyName - In the implementation block
@property (assign) BOOL _allowsTLSFallback;                                                             //@synthesize allowsTLSFallback=_allowsTLSFallback - In the implementation block
@property (assign) BOOL _preventsDirectWiFiAccess;                                                      //@synthesize preventsDirectWiFiAccess=_preventsDirectWiFiAccess - In the implementation block
@property (assign) BOOL _allowTCPIOConnectionStreamTask;                                                //@synthesize allowTCPIOConnectionStreamTask=_allowTCPIOConnectionStreamTask - In the implementation block
@property (assign) unsigned long long _customReadBufferSize;                                            //@synthesize customReadBufferSize=_customReadBufferSize - In the implementation block
@property (assign) double _customReadBufferTimeout;                                                     //@synthesize customReadBufferTimeout=_customReadBufferTimeout - In the implementation block
@property (assign) BOOL _preventsSystemHTTPProxyAuthentication;                                         //@synthesize preventsSystemHTTPProxyAuthentication=_preventsSystemHTTPProxyAuthentication - In the implementation block
@property (assign) BOOL _requiresSecureHTTPSProxyConnection;                                            //@synthesize requiresSecureHTTPSProxyConnection=_requiresSecureHTTPSProxyConnection - In the implementation block
@property (assign) BOOL _duetPreauthorized;                                                             //@synthesize duetPreauthorized=_duetPreauthorized - In the implementation block
@property (assign) long long _duetPreClearedMode;                                                       //@synthesize duetPreClearedMode=_duetPreClearedMode - In the implementation block
@property (assign) BOOL _requiresSustainedDataDelivery;                                                 //@synthesize requiresSustainedDataDelivery=_requiresSustainedDataDelivery - In the implementation block
@property (assign) BOOL _ignoreDidReceiveResponseDisposition;                                           //@synthesize ignoreDidReceiveResponseDisposition=_ignoreDidReceiveResponseDisposition - In the implementation block
@property (assign) BOOL _alwaysPerformDefaultTrustEvaluation;                                           //@synthesize alwaysPerformDefaultTrustEvaluation=_alwaysPerformDefaultTrustEvaluation - In the implementation block
@property (copy) NSSet * _suppressedAutoAddedHTTPHeaders;                                               //@synthesize suppressedAutoAddedHTTPHeaders=_suppressedAutoAddedHTTPHeaders - In the implementation block
@property (assign) long long _expiredDNSBehavior;                                                       //@synthesize expiredDNSBehavior=_expiredDNSBehavior - In the implementation block
@property (assign) long long _IDSMessageTimeout;                                                        //@synthesize IDSMessageTimeout=_IDSMessageTimeout - In the implementation block
@property (assign) long long _companionProxyPreference;                                                 //@synthesize _companionProxyPreference=__companionProxyPreference - In the implementation block
@property (assign) BOOL _preventsAppSSO;                                                                //@synthesize preventsAppSSO=_preventsAppSSO - In the implementation block
@property (assign) BOOL _allowsSensitiveLogging; 
@property (assign) BOOL _allowsReachabilityCheck;                                                       //@synthesize allowsReachabilityCheck=_allowsReachabilityCheck - In the implementation block
@property (assign) BOOL _allowsHTTP3;                                                                   //@synthesize allowsHTTP3=_allowsHTTP3 - In the implementation block
@property (retain) _NSHTTPAlternativeServicesStorage * _alternativeServicesStorage; 
@property (retain) _NSHSTSStorage * _hstsStorage; 
@property (assign) int _loggingPrivacyLevel;                                                            //@synthesize loggingPrivacyLevel=_loggingPrivacyLevel - In the implementation block
@property (assign) unsigned long long requestCachePolicy;                                               //@synthesize requestCachePolicy=_requestCachePolicy - In the implementation block
@property (assign) double timeoutIntervalForRequest;                                                    //@synthesize timeoutIntervalForRequest=_timeoutIntervalForRequest - In the implementation block
@property (assign) double timeoutIntervalForResource;                                                   //@synthesize timeoutIntervalForResource=_timeoutIntervalForResource - In the implementation block
@property (assign) unsigned long long networkServiceType;                                               //@synthesize networkServiceType=_networkServiceType - In the implementation block
@property (assign) BOOL allowsCellularAccess;                                                           //@synthesize allowsCellularAccess=_allowsCellularAccess - In the implementation block
@property (assign) BOOL allowsExpensiveNetworkAccess;                                                   //@synthesize allowsExpensiveNetworkAccess=_allowsExpensiveNetworkAccess - In the implementation block
@property (assign) BOOL allowsConstrainedNetworkAccess;                                                 //@synthesize allowsConstrainedNetworkAccessAPI=_allowsConstrainedNetworkAccessAPI - In the implementation block
@property (assign) BOOL waitsForConnectivity;                                                           //@synthesize waitsForConnectivity=_waitsForConnectivity - In the implementation block
@property (getter=isDiscretionary) BOOL discretionary;                                                  //@synthesize discretionary=_discretionary - In the implementation block
@property (copy) NSString * sharedContainerIdentifier;                                                  //@synthesize sharedContainerIdentifier=_sharedContainerIdentifier - In the implementation block
@property (assign) BOOL sessionSendsLaunchEvents;                                                       //@synthesize sessionSendsLaunchEvents=_sessionSendsLaunchEvents - In the implementation block
@property (copy) NSDictionary * connectionProxyDictionary;                                              //@synthesize connectionProxyDictionary=_connectionProxyDictionary - In the implementation block
@property (assign) int TLSMinimumSupportedProtocol;                                                     //@synthesize TLSMinimumSupportedProtocol=_TLSMinimumSupportedProtocol - In the implementation block
@property (assign) int TLSMaximumSupportedProtocol;                                                     //@synthesize TLSMaximumSupportedProtocol=_TLSMaximumSupportedProtocol - In the implementation block
@property (assign) unsigned short TLSMinimumSupportedProtocolVersion; 
@property (assign) unsigned short TLSMaximumSupportedProtocolVersion; 
@property (assign) BOOL HTTPShouldUsePipelining;                                                        //@synthesize HTTPShouldUsePipelining=_HTTPShouldUsePipelining - In the implementation block
@property (assign) BOOL HTTPShouldSetCookies;                                                           //@synthesize HTTPShouldSetCookies=_HTTPShouldSetCookies - In the implementation block
@property (assign) unsigned long long HTTPCookieAcceptPolicy;                                           //@synthesize HTTPCookieAcceptPolicy=_HTTPCookieAcceptPolicy - In the implementation block
@property (copy) NSDictionary * HTTPAdditionalHeaders;                                                  //@synthesize HTTPAdditionalHeaders=_HTTPAdditionalHeaders - In the implementation block
@property (assign) long long HTTPMaximumConnectionsPerHost;                                             //@synthesize HTTPMaximumConnectionsPerHost=_HTTPMaximumConnectionsPerHost - In the implementation block
@property (retain) NSHTTPCookieStorage * HTTPCookieStorage; 
@property (retain) NSURLCredentialStorage * URLCredentialStorage; 
@property (retain) NSURLCache * URLCache; 
@property (assign) BOOL shouldUseExtendedBackgroundIdleMode;                                            //@synthesize shouldUseExtendedBackgroundIdleMode=_shouldUseExtendedBackgroundIdleMode - In the implementation block
@property (copy) NSArray * protocolClasses;                                                             //@synthesize protocolClasses=_protocolClasses - In the implementation block
@property (assign) long long multipathServiceType;                                                      //@synthesize multipathServiceType=_multipathServiceType - In the implementation block
+(id)new;
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)_AVBackgroundSessionConfigurationWithIdentifier:(id)arg1 ;
+(id)backgroundSessionConfigurationWithIdentifier:(id)arg1 ;
+(id)AVBackgroundSessionConfigurationWithIdentifier:(id)arg1 ;
+(id)sessionConfigurationForSharedSession;
+(id)_defaultProtocolClasses;
+(id)ephemeralSessionConfiguration;
+(id)backgroundSessionConfiguration:(id)arg1 ;
+(id)defaultSessionConfiguration;
-(void)setDiscretionary:(BOOL)arg1 ;
-(void)setTLSMaximumSupportedProtocolVersion:(unsigned short)arg1 ;
-(NSURLCache *)URLCache;
-(void)set_respectsAllowsCellularAccessForDiscretionaryTasks:(BOOL)arg1 ;
-(double)_connectionCacheCellPurgeTimeout;
-(BOOL)_infersDiscretionaryFromOriginatingClient;
-(double)_longLivedConnectionCacheCellPurgeTimeout;
-(void)set_longLivedConnectionCachePurgeTimeout:(double)arg1 ;
-(NSData *)_atsContext;
-(void)set_phskip_alternativeServicesStorageSet:(BOOL)arg1 ;
-(BOOL)_allowsResponseMonitoringDuringBodyTranmission;
-(BOOL)_respectsAllowsCellularAccessForDiscretionaryTasks;
-(BOOL)_requiresSecureHTTPSProxyConnection;
-(void)set_allowsResponseMonitoringDuringBodyTranmission:(BOOL)arg1 ;
-(BOOL)_overridesBackgroundSessionAutoRedirect;
-(BOOL)_allowsRetryForBackgroundDataTasks;
-(void)setAllowsConstrainedNetworkAccess:(BOOL)arg1 ;
-(void)set_requiresSecureHTTPSProxyConnection:(BOOL)arg1 ;
-(void)set_shouldSkipPreferredClientCertificateLookup:(BOOL)arg1 ;
-(void)set_preventsSystemHTTPProxyAuthentication:(BOOL)arg1 ;
-(void)set_shouldPreserveBackgroundSessionDisposition:(BOOL)arg1 ;
-(BOOL)_allowsWCA;
-(BOOL)_shouldPreserveBackgroundSessionDisposition;
-(void)set_connectionCacheMinimumFastLanePriority:(long long)arg1 ;
-(long long)_connectionCacheMinimumFastLanePriority;
-(void)setShouldUseExtendedBackgroundIdleMode:(BOOL)arg1 ;
-(void)set_overridesBackgroundSessionAutoRedirect:(BOOL)arg1 ;
-(id)init;
-(void)set_ignoreDidReceiveResponseDisposition:(BOOL)arg1 ;
-(void)set_clientIsNotExplicitlyDiscretionary:(BOOL)arg1 ;
-(void)set_alwaysPerformDefaultTrustEvaluation:(BOOL)arg1 ;
-(NSData *)_sourceApplicationAuditTokenData;
-(CFHSTSPolicyRef)copyHSTSPolicy;
-(void)setURLCache:(NSURLCache *)arg1 ;
-(void)set_sourceApplicationAuditTokenData:(NSData *)arg1 ;
-(void)set_disablesOutOfProcessDirectWiFiUsage:(BOOL)arg1 ;
-(BOOL)_alwaysPerformDefaultTrustEvaluation;
-(BOOL)_requiresClientToOpenFiles;
-(void)set_allowTCPIOConnectionStreamTask:(BOOL)arg1 ;
-(void)set_longLivedConnectionCacheCellPurgeTimeout:(double)arg1 ;
-(_NSHTTPAlternativeServicesStorage *)_phskip_alternativeServicesStorage;
-(NSHTTPCookieStorage *)HTTPCookieStorage;
-(unsigned short)TLSMinimumSupportedProtocolVersion;
-(void)setAllowsExpensiveNetworkAccess:(BOOL)arg1 ;
-(unsigned short)TLSMaximumSupportedProtocolVersion;
-(void)set_requiresSustainedDataDelivery:(BOOL)arg1 ;
-(NSURL *)_directoryForDownloadedFiles;
-(void)set_infersDiscretionaryFromOriginatingClient:(BOOL)arg1 ;
-(void)set_connectionCacheNumFastLanes:(long long)arg1 ;
-(void)setHTTPMaximumConnectionsPerHost:(long long)arg1 ;
-(void)set_directoryForDownloadedFiles:(NSURL *)arg1 ;
-(HTTPConnectionCacheLimits)getConnectionCacheLimits;
-(_NSHTTPAlternativeServicesStorage *)_alternativeServicesStorage;
-(BOOL)shouldUseExtendedBackgroundIdleMode;
-(void)set_connectionCachePurgeTimeout:(double)arg1 ;
-(BOOL)_ignoreDidReceiveResponseDisposition;
-(void)set_allowsIndefiniteConnections:(BOOL)arg1 ;
-(BOOL)_clientIsNotExplicitlyDiscretionary;
-(void)set_CTDataConnectionServiceType:(NSString *)arg1 ;
-(NSSet *)_suppressedAutoAddedHTTPHeaders;
-(void)set_allowsRetryForBackgroundDataTasks:(BOOL)arg1 ;
-(void)set_phskip_alternativeServicesStorage:(_NSHTTPAlternativeServicesStorage *)arg1 ;
-(NSDictionary *)_overriddenDelegateOptions;
-(void)set_allowsConstrainedNetworkAccess:(BOOL)arg1 ;
-(NSDictionary *)HTTPAdditionalHeaders;
-(void)set_preventsIdleSleepOnceConnected:(BOOL)arg1 ;
-(BOOL)_disablesOutOfProcessDirectWiFiUsage;
-(BOOL)_sessionSendsLaunchOnDemandEvents;
-(int)TLSMaximumSupportedProtocol;
-(void)set_watchExtensionBundleIdentifier:(NSString *)arg1 ;
-(void)set_suppressedAutoAddedHTTPHeaders:(NSSet *)arg1 ;
-(int)TLSMinimumSupportedProtocol;
-(BOOL)_phskip_alternativeServicesStorageSet;
-(BOOL)_isProxySession;
-(double)_longLivedConnectionCachePurgeTimeout;
-(void)set_TCPAdaptiveReadTimeout:(unsigned long long)arg1 ;
-(void)set_connectionCacheNumPriorityLevels:(long long)arg1 ;
-(void)setHTTPCookieStorage:(NSHTTPCookieStorage *)arg1 ;
-(void)set_sessionSendsLaunchOnDemandEvents:(BOOL)arg1 ;
-(NSNumber *)_maximumWatchCellularTransferSize;
-(long long)_connectionCacheNumPriorityLevels;
-(void)setConnectionProxyDictionary:(NSDictionary *)arg1 ;
-(void)set_maximumWatchCellularTransferSize:(NSNumber *)arg1 ;
-(void)set_TCPAdaptiveWriteTimeout:(unsigned long long)arg1 ;
-(BOOL)_requiresSustainedDataDelivery;
-(BOOL)_supportsAVAssetDownloads;
-(NSURLCredentialStorage *)URLCredentialStorage;
-(void)set_companionAppBundleIdentifier:(NSString *)arg1 ;
-(long long)HTTPMaximumConnectionsPerHost;
-(void)setHTTPAdditionalHeaders:(NSDictionary *)arg1 ;
-(int)_loggingPrivacyLevel;
-(BOOL)_allowsHTTP3;
-(BOOL)waitsForConnectivity;
-(BOOL)skip_download_unlink;
-(NSDictionary *)connectionProxyDictionary;
-(_NSHSTSStorage *)_hstsStorage;
-(long long)numFastLanes;
-(NSArray *)protocolClasses;
-(void)set_atsContext:(NSData *)arg1 ;
-(unsigned long long)HTTPCookieAcceptPolicy;
-(void)set_connectionCacheCellPurgeTimeout:(double)arg1 ;
-(BOOL)_allowTCPIOConnectionStreamTask;
-(BOOL)allowsConstrainedNetworkAccess;
-(void)setTLSMaximumSupportedProtocol:(int)arg1 ;
-(void)setURLCredentialStorage:(NSURLCredentialStorage *)arg1 ;
-(unsigned long long)_TCPAdaptiveWriteTimeout;
-(void)setTLSMinimumSupportedProtocol:(int)arg1 ;
-(BOOL)allowsExpensiveNetworkAccess;
-(void*)_copyAttribute:(CFStringRef)arg1 ;
-(void)setProtocolClasses:(NSArray *)arg1 ;
-(void)set_authenticatorStatusCodes:(NSSet *)arg1 ;
-(void)set_supportsAVAssetDownloads:(BOOL)arg1 ;
-(BOOL)_allowsReachabilityCheck;
-(id<NSURLSessionAppleIDContext>)_appleIDContext;
-(NSString *)_CTDataConnectionServiceType;
-(void)setRequestCachePolicy:(unsigned long long)arg1 ;
-(BOOL)_allowsIndefiniteConnections;
-(long long)_timingDataOptions;
-(unsigned long long)_forcedNetworkServiceType;
-(void)setHTTPShouldUsePipelining:(BOOL)arg1 ;
-(BOOL)HTTPShouldSetCookies;
-(id)copyImmutableVariant:(/*^block*/id)arg1 ;
-(unsigned long long)networkServiceType;
-(NSString *)_tlsTrustPinningPolicyName;
-(BOOL)_reportsDataStalls;
-(BOOL)_preventsAppSSO;
-(BOOL)_allowsTLSSessionResumption;
-(unsigned long long)_customReadBufferSize;
-(BOOL)_forcesNewConnections;
-(NSSet *)_authenticatorStatusCodes;
-(NSString *)_companionAppBundleIdentifier;
-(void)set_tlsTrustPinningPolicyName:(NSString *)arg1 ;
-(NSString *)_tcpConnectionPoolName;
-(BOOL)_prefersInfraWiFi;
-(long long)numPriorityLevels;
-(void)set_proxySession:(BOOL)arg1 ;
-(void)set_requiresClientToOpenFiles:(BOOL)arg1 ;
-(double)_connectionCachePurgeTimeout;
-(void)set_disablesUseOfProxySession:(BOOL)arg1 ;
-(void)setSharedContainerIdentifier:(NSString *)arg1 ;
-(void)set_preventsDirectWiFiAccess:(BOOL)arg1 ;
-(NSArray *)_contentDispHeadEncFallback;
-(void)set_allowsSensitiveLogging:(BOOL)arg1 ;
-(void)set_watchAppBundleIdentifier:(NSString *)arg1 ;
-(BOOL)_preventsDirectWiFiAccess;
-(void)set_overriddenDelegateOptions:(NSDictionary *)arg1 ;
-(BOOL)_preventsIdleSleepOnceConnected;
-(long long)_connectionCacheNumFastLanes;
-(NSString *)_watchAppBundleIdentifier;
-(void)set_forcedNetworkServiceType:(unsigned long long)arg1 ;
-(void)set_customReadBufferSize:(unsigned long long)arg1 ;
-(void)setSessionSendsLaunchEvents:(BOOL)arg1 ;
-(void)set_phskip_cookieStorage:(NSHTTPCookieStorage *)arg1 ;
-(void)set_allowsTLSSessionTickets:(BOOL)arg1 ;
-(void)set_forcesNewConnections:(BOOL)arg1 ;
-(long long)_companionProxyPreference;
-(double)_customReadBufferTimeout;
-(void)set_companionProxyPreference:(long long)arg1 ;
-(BOOL)_allowsTLSSessionTickets;
-(BOOL)_allowsConstrainedNetworkAccess;
-(void)set_requiresPowerPluggedIn:(BOOL)arg1 ;
-(void)set_onBehalfOfPairedDevice:(BOOL)arg1 ;
-(void)set_customReadBufferTimeout:(double)arg1 ;
-(void)set_allowsWCA:(BOOL)arg1 ;
-(NSString *)_watchExtensionBundleIdentifier;
-(void)set_alternativeServicesStorage:(_NSHTTPAlternativeServicesStorage *)arg1 ;
-(void)set_allowsReachabilityCheck:(BOOL)arg1 ;
-(void)set_multipathAlternatePort:(unsigned long long)arg1 ;
-(void)set_allowsTLSSessionResumption:(BOOL)arg1 ;
-(void)setPipeliningHighWatermark:(long long)arg1 ;
-(void)set_phskip_cookieStorageSet:(BOOL)arg1 ;
-(BOOL)_disablesUseOfProxySession;
-(BOOL)_allowsTLSFalseStart;
-(void)set_contentDispHeadEncFallback:(NSArray *)arg1 ;
-(void)setMinimumFastLanePriority:(long long)arg1 ;
-(BOOL)_performsEVCertCheck;
-(unsigned long long)_TCPAdaptiveReadTimeout;
-(void)set_usePipeliningHeuristics:(BOOL)arg1 ;
-(void)setHTTPCookieAcceptPolicy:(unsigned long long)arg1 ;
-(void)set_phskip_urlCache:(NSURLCache *)arg1 ;
-(void)set_phskip_credStorageSet:(BOOL)arg1 ;
-(BOOL)_phskip_credStorageSet;
-(NSURLCache *)_phskip_urlCache;
-(void)set_phskip_hstsStorageSet:(BOOL)arg1 ;
-(void)set_hstsStorage:(_NSHSTSStorage *)arg1 ;
-(void)setNumFastLanes:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPipeliningLowWatermark:(long long)arg1 ;
-(BOOL)_phskip_hstsStorageSet;
-(void)set_allowsHTTP3:(BOOL)arg1 ;
-(void)set_reportsDataStalls:(BOOL)arg1 ;
-(void)set_timingDataOptions:(long long)arg1 ;
-(BOOL)_allowsTCPFastOpen;
-(void)set_tcpConnectionPoolName:(NSString *)arg1 ;
-(void)set_allowsTCPFastOpen:(BOOL)arg1 ;
-(void)set_allowsTLSFallback:(BOOL)arg1 ;
-(void)set_duetPreauthorized:(BOOL)arg1 ;
-(void)set_IDSMessageTimeout:(long long)arg1 ;
-(NSHTTPCookieStorage *)_phskip_cookieStorage;
-(BOOL)_phskip_cookieStorageSet;
-(long long)pipeliningLowWatermark;
-(void)set_prefersInfraWiFi:(BOOL)arg1 ;
-(BOOL)_usePipeliningHeuristics;
-(void)setNumPriorityLevels:(long long)arg1 ;
-(void)set_preventsIdleSleep:(BOOL)arg1 ;
-(void)setWaitsForConnectivity:(BOOL)arg1 ;
-(BOOL)sessionSendsLaunchEvents;
-(void)setHTTPShouldSetCookies:(BOOL)arg1 ;
-(void)set_performsEVCertCheck:(BOOL)arg1 ;
-(void)set_allowsTLSFalseStart:(BOOL)arg1 ;
-(BOOL)_allowsMultipathTCP;
-(void)set_loggingPrivacyLevel:(int)arg1 ;
-(void)setSkip_download_unlink:(BOOL)arg1 ;
-(BOOL)_duetPreauthorized;
-(BOOL)_requiresPowerPluggedIn;
-(unsigned long long)_multipathAlternatePort;
-(long long)_expiredDNSBehavior;
-(BOOL)_preventsIdleSleep;
-(long long)_IDSMessageTimeout;
-(unsigned long long)requestCachePolicy;
-(BOOL)_phskip_urlCacheSet;
-(NSString *)_connectionPoolName;
-(long long)_duetPreClearedMode;
-(NSURLCredentialStorage *)_phskip_credStorage;
-(_NSHSTSStorage *)_phskip_hstsStorage;
-(void)set_appleIDContext:(id<NSURLSessionAppleIDContext>)arg1 ;
-(BOOL)isBackgroundSession;
-(BOOL)_onBehalfOfPairedDevice;
-(BOOL)_allowsSensitiveLogging;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)set_connectionPoolName:(NSString *)arg1 ;
-(void)set_sourceApplicationSecondaryIdentifier:(NSString *)arg1 ;
-(void)set_allowsMultipathTCP:(BOOL)arg1 ;
-(void)set_duetPreClearedMode:(long long)arg1 ;
-(void)set_phskip_credStorage:(NSURLCredentialStorage *)arg1 ;
-(void)set_phskip_urlCacheSet:(BOOL)arg1 ;
-(void)set_phskip_hstsStorage:(_NSHSTSStorage *)arg1 ;
-(long long)pipeliningHighWatermark;
-(long long)minimumFastLanePriority;
-(void)set_expiredDNSBehavior:(long long)arg1 ;
-(void)setDisposition:(NSString *)arg1 ;
-(BOOL)HTTPShouldUsePipelining;
-(void)setTimeoutIntervalForResource:(double)arg1 ;
-(void)setMultipathServiceType:(long long)arg1 ;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(NSDictionary *)_socketStreamProperties;
-(double)timeoutIntervalForRequest;
-(void)set_allowsExpensiveAccess:(BOOL)arg1 ;
-(BOOL)_allowsPowerNapScheduling;
-(NSString *)_sourceApplicationSecondaryIdentifier;
-(BOOL)allowsCellularAccess;
-(void)set_allowsPowerNapScheduling:(BOOL)arg1 ;
-(unsigned long long)hash;
-(NSString *)_sourceApplicationBundleIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_shouldSkipPreferredClientCertificateLookup;
-(long long)multipathServiceType;
-(NSString *)sharedContainerIdentifier;
-(BOOL)_preventsSystemHTTPProxyAuthentication;
-(void)setTLSMinimumSupportedProtocolVersion:(unsigned short)arg1 ;
-(void)setNetworkServiceType:(unsigned long long)arg1 ;
-(NSString *)disposition;
-(void)set_socketStreamProperties:(NSDictionary *)arg1 ;
-(void)set_sourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)set_preventsAppSSO:(BOOL)arg1 ;
-(BOOL)_allowsTLSFallback;
-(BOOL)isDiscretionary;
-(void)setBackgroundSession:(BOOL)arg1 ;
-(double)timeoutIntervalForResource;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_allowsExpensiveAccess;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setTimeoutIntervalForRequest:(double)arg1 ;
@end
