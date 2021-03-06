/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
*/

#import <MailServices/MSXPCService.h>
#import <libobjc.A.dylib/MSDSearchResultsProtocol.h>

@protocol MSSearchDelegate;
@class NSString;

@interface MSSearch : MSXPCService <MSDSearchResultsProtocol> {

	id<MSSearchDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MSSearchDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)findMessageData:(id)arg1 matchingCriterion:(id)arg2 options:(unsigned long long)arg3 delegate:(id)arg4 ;
+(id)findMessageData:(id)arg1 matchingCriterion:(id)arg2 shouldFetch:(BOOL)arg3 onServer:(BOOL)arg4 delegate:(id)arg5 ;
+(id)findMessageData:(id)arg1 matchingCriterion:(id)arg2 shouldFetch:(BOOL)arg3 onServer:(BOOL)arg4 onlyInboxes:(BOOL)arg5 delegate:(id)arg6 ;
+(void)setUnitTestingResultsArray:(id)arg1 ;
-(id)_generateUnitTestReplyForMethod:(id)arg1 arg:(id)arg2 error:(id*)arg3 ;
-(id)initWithRemoteObjectInterface:(id)arg1 ;
-(id<MSSearchDelegate>)delegate;
-(id)newConnectionForInterface:(id)arg1 ;
-(BOOL)_unitTestsAreEnabled;
-(void)foundResults:(id)arg1 error:(id)arg2 ;
-(void)_generateUnitTestResponsesForResultArray:(id)arg1 ;
-(void)setDelegate:(id<MSSearchDelegate>)arg1 ;
-(id)_initWithDelegate:(id)arg1 ;
-(void)_findMessageData:(id)arg1 matchingCriterion:(id)arg2 options:(unsigned long long)arg3 ;
-(void)cancel;
-(void)_delegateDidFindResults:(id)arg1 ;
-(void)_delegateDidFinishWithError:(id)arg1 ;
@end

