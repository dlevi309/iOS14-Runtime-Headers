/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStore/ISOperation.h>
#import <libobjc.A.dylib/ISURLOperationDelegate.h>

@class NSString, SUClientInterface, SUSectionsResponse, NSNumber;

@interface SULoadSectionsOperation : ISOperation <ISURLOperationDelegate> {

	NSString* _activeSectionVersionString;
	SUClientInterface* _clientInterface;
	SUSectionsResponse* _sectionsResponse;
	BOOL _shouldUseCache;

}

@property (copy) NSString * activeSectionVersionString; 
@property (assign) BOOL shouldUseCache; 
@property (readonly) SUSectionsResponse * sectionsResponse; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSessionDuration; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentage; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentageCachedResponses; 
-(id)init;
-(void)dealloc;
-(void)run;
-(id)initWithClientInterface:(id)arg1 ;
-(BOOL)_loadSectionsFromNetworkWithDictionary:(id)arg1 ;
-(id)_cachePathForVersion:(id)arg1 create:(BOOL)arg2 ;
-(void)_setSectionsResponse:(id)arg1 ;
-(BOOL)shouldUseCache;
-(BOOL)_loadSectionsFromCacheForVersion:(id)arg1 ;
-(SUSectionsResponse *)sectionsResponse;
-(void)_writeSectionsResponseToCache:(id)arg1 forVersion:(id)arg2 ;
-(NSString *)activeSectionVersionString;
-(void)setActiveSectionVersionString:(NSString *)arg1 ;
-(void)setShouldUseCache:(BOOL)arg1 ;
@end

