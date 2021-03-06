/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/


@class CNAutocompleteFetchRequest, NSMutableDictionary;

@interface _CNAutocompleteUserSessionDisplayedResults : NSObject {

	BOOL _ignored;
	BOOL _containsDuetResults;
	CNAutocompleteFetchRequest* _request;
	NSMutableDictionary* _datesByBatchIndexes;

}

@property (nonatomic,readonly) CNAutocompleteFetchRequest * request;                 //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * datesByBatchIndexes;              //@synthesize datesByBatchIndexes=_datesByBatchIndexes - In the implementation block
@property (assign,nonatomic) BOOL ignored;                                           //@synthesize ignored=_ignored - In the implementation block
@property (assign,nonatomic) BOOL containsDuetResults;                               //@synthesize containsDuetResults=_containsDuetResults - In the implementation block
-(CNAutocompleteFetchRequest *)request;
-(id)initWithRequest:(id)arg1 ;
-(BOOL)ignored;
-(void)setIgnored:(BOOL)arg1 ;
-(BOOL)relevantForRequest:(id)arg1 ;
-(NSMutableDictionary *)datesByBatchIndexes;
-(void)setContainsDuetResults:(BOOL)arg1 ;
-(void)didReceiveBatch:(unsigned long long)arg1 ;
-(BOOL)containsDuetResults;
-(void)setDatesByBatchIndexes:(NSMutableDictionary *)arg1 ;
@end

