/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/

#import <TVPlayback/TVPSecureKeyLoader.h>

@protocol TVPSecureKeyStandardLoaderRequestGenerating, TVPSecureKeyStandardLoaderConnectionHandling;
@class NSString, NSNumber, NSURL, TVPSecureKeyRequest, NSMutableArray, NSDate;

@interface TVPSecureKeyStandardLoader : TVPSecureKeyLoader {

	BOOL _holdKeyResponses;
	BOOL _didSkipRentalCheckout;
	BOOL _includeGUID;
	BOOL _requiresExternalEntitlementCheck;
	id<TVPSecureKeyStandardLoaderRequestGenerating> _requestGenerator;
	id<TVPSecureKeyStandardLoaderConnectionHandling> _connectionHandler;
	NSString* _serviceProviderID;
	NSNumber* _rentalID;
	NSURL* _certificateDataURL;
	NSURL* _keyDataURL;
	TVPSecureKeyRequest* _savedRequestToUseForStopping;
	NSMutableArray* _pendingKeyResponses;
	NSDate* _rentalExpirationDate;
	NSDate* _rentalPlaybackStartDate;

}

@property (nonatomic,retain) NSURL * certificateDataURL;                                                      //@synthesize certificateDataURL=_certificateDataURL - In the implementation block
@property (nonatomic,retain) NSURL * keyDataURL;                                                              //@synthesize keyDataURL=_keyDataURL - In the implementation block
@property (nonatomic,retain) TVPSecureKeyRequest * savedRequestToUseForStopping;                              //@synthesize savedRequestToUseForStopping=_savedRequestToUseForStopping - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingKeyResponses;                                            //@synthesize pendingKeyResponses=_pendingKeyResponses - In the implementation block
@property (nonatomic,retain) NSDate * rentalExpirationDate;                                                   //@synthesize rentalExpirationDate=_rentalExpirationDate - In the implementation block
@property (nonatomic,retain) NSDate * rentalPlaybackStartDate;                                                //@synthesize rentalPlaybackStartDate=_rentalPlaybackStartDate - In the implementation block
@property (nonatomic,retain) id<TVPSecureKeyStandardLoaderRequestGenerating> requestGenerator;                //@synthesize requestGenerator=_requestGenerator - In the implementation block
@property (nonatomic,retain) id<TVPSecureKeyStandardLoaderConnectionHandling> connectionHandler;              //@synthesize connectionHandler=_connectionHandler - In the implementation block
@property (assign,nonatomic) BOOL holdKeyResponses;                                                           //@synthesize holdKeyResponses=_holdKeyResponses - In the implementation block
@property (assign,nonatomic) BOOL didSkipRentalCheckout;                                                      //@synthesize didSkipRentalCheckout=_didSkipRentalCheckout - In the implementation block
@property (assign,nonatomic) BOOL includeGUID;                                                                //@synthesize includeGUID=_includeGUID - In the implementation block
@property (assign,nonatomic) BOOL requiresExternalEntitlementCheck;                                           //@synthesize requiresExternalEntitlementCheck=_requiresExternalEntitlementCheck - In the implementation block
@property (nonatomic,retain) NSString * serviceProviderID;                                                    //@synthesize serviceProviderID=_serviceProviderID - In the implementation block
@property (nonatomic,retain) NSNumber * rentalID;                                                             //@synthesize rentalID=_rentalID - In the implementation block
+(void)initialize;
-(void)setConnectionHandler:(id<TVPSecureKeyStandardLoaderConnectionHandling>)arg1 ;
-(id)init;
-(NSNumber *)rentalID;
-(void)setRentalID:(NSNumber *)arg1 ;
-(id<TVPSecureKeyStandardLoaderConnectionHandling>)connectionHandler;
-(NSDate *)rentalExpirationDate;
-(void)setRentalExpirationDate:(NSDate *)arg1 ;
-(NSDate *)rentalPlaybackStartDate;
-(void)setRentalPlaybackStartDate:(NSDate *)arg1 ;
-(BOOL)didSkipRentalCheckout;
-(void)setDidSkipRentalCheckout:(BOOL)arg1 ;
-(void)startLoadingCertificateDataForRequest:(id)arg1 ;
-(void)startLoadingContentIdentifierDataForRequest:(id)arg1 ;
-(void)startLoadingKeyResponseDataForRequest:(id)arg1 ;
-(void)sendStopRequest;
-(NSMutableArray *)pendingKeyResponses;
-(BOOL)includeGUID;
-(BOOL)requiresExternalEntitlementCheck;
-(NSString *)serviceProviderID;
-(NSURL *)certificateDataURL;
-(id<TVPSecureKeyStandardLoaderRequestGenerating>)requestGenerator;
-(id)_assetIdentifierForKeyRequest:(id)arg1 ;
-(TVPSecureKeyRequest *)savedRequestToUseForStopping;
-(void)setSavedRequestToUseForStopping:(TVPSecureKeyRequest *)arg1 ;
-(NSURL *)keyDataURL;
-(id)_bodyJSONDataForRequest:(id)arg1 forceStop:(BOOL)arg2 ;
-(BOOL)holdKeyResponses;
-(id)initWithCertificateDataURL:(id)arg1 keyDataURL:(id)arg2 ;
-(void)setHoldKeyResponses:(BOOL)arg1 ;
-(void)setRequestGenerator:(id<TVPSecureKeyStandardLoaderRequestGenerating>)arg1 ;
-(void)setIncludeGUID:(BOOL)arg1 ;
-(void)setRequiresExternalEntitlementCheck:(BOOL)arg1 ;
-(void)setServiceProviderID:(NSString *)arg1 ;
-(void)setCertificateDataURL:(NSURL *)arg1 ;
-(void)setKeyDataURL:(NSURL *)arg1 ;
-(void)setPendingKeyResponses:(NSMutableArray *)arg1 ;
@end
