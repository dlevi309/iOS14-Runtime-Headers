/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <ContactsFoundation/CNTask.h>

@class CNContactStore, NSData, CNChangeHistoryFetchRequest, CNResult, NSArray;

@interface CNAvatarCacheChangeHistoryAnalysisTask : CNTask {

	CNContactStore* _store;
	NSData* _startingToken;
	CNChangeHistoryFetchRequest* _request;
	CNResult* _enumerator;
	NSData* _finalToken;
	NSArray* _identifiers;

}

@property (nonatomic,readonly) CNContactStore * store;                           //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) NSData * startingToken;                           //@synthesize startingToken=_startingToken - In the implementation block
@property (nonatomic,retain) CNChangeHistoryFetchRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) CNResult * enumerator;                              //@synthesize enumerator=_enumerator - In the implementation block
@property (nonatomic,retain) NSData * finalToken;                                //@synthesize finalToken=_finalToken - In the implementation block
@property (nonatomic,retain) NSArray * identifiers;                              //@synthesize identifiers=_identifiers - In the implementation block
-(NSArray *)identifiers;
-(CNContactStore *)store;
-(void)setRequest:(CNChangeHistoryFetchRequest *)arg1 ;
-(CNChangeHistoryFetchRequest *)request;
-(CNResult *)enumerator;
-(void)setIdentifiers:(NSArray *)arg1 ;
-(id)run:(id*)arg1 ;
-(NSData *)startingToken;
-(NSData *)finalToken;
-(void)setEnumerator:(CNResult *)arg1 ;
-(id)initWithContactStore:(id)arg1 startingToken:(id)arg2 ;
-(void)makeRequest;
-(void)executeRequest;
-(void)extractIdentifiers;
-(void)setFinalToken:(NSData *)arg1 ;
@end
