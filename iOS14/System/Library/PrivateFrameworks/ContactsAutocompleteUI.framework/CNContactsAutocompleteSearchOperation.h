/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
*/

#import <ContactsAutocompleteUI/CNAutocompleteSearchOperation.h>
#import <libobjc.A.dylib/CNAutocompleteFetchDelegate.h>

@class CNCancelationToken, CNPromise, NSNumber, CNAutocompleteFetchContext, CNAutocompleteStore, NSString;

@interface CNContactsAutocompleteSearchOperation : CNAutocompleteSearchOperation <CNAutocompleteFetchDelegate> {

	BOOL _includeContacts;
	BOOL _includeRecents;
	BOOL _includeSuggestions;
	BOOL _includeServers;
	BOOL _shouldUnifyResults;
	BOOL _simulateResults;
	CNCancelationToken* _fetchRequestToken;
	CNPromise* _fetchRequestPromise;
	NSNumber* _shouldIncludeGroupResults;
	CNAutocompleteFetchContext* _fetchContext;
	CNAutocompleteStore* _autocompleteStore;

}

@property (nonatomic,retain) CNCancelationToken * fetchRequestToken;               //@synthesize fetchRequestToken=_fetchRequestToken - In the implementation block
@property (nonatomic,retain) CNPromise * fetchRequestPromise;                      //@synthesize fetchRequestPromise=_fetchRequestPromise - In the implementation block
@property (assign,nonatomic) BOOL includeContacts;                                 //@synthesize includeContacts=_includeContacts - In the implementation block
@property (assign,nonatomic) BOOL includeRecents;                                  //@synthesize includeRecents=_includeRecents - In the implementation block
@property (assign,nonatomic) BOOL includeSuggestions;                              //@synthesize includeSuggestions=_includeSuggestions - In the implementation block
@property (assign,nonatomic) BOOL includeServers;                                  //@synthesize includeServers=_includeServers - In the implementation block
@property (nonatomic,retain) NSNumber * shouldIncludeGroupResults;                 //@synthesize shouldIncludeGroupResults=_shouldIncludeGroupResults - In the implementation block
@property (assign,nonatomic) BOOL shouldUnifyResults;                              //@synthesize shouldUnifyResults=_shouldUnifyResults - In the implementation block
@property (assign,nonatomic) BOOL simulateResults;                                 //@synthesize simulateResults=_simulateResults - In the implementation block
@property (nonatomic,copy) CNAutocompleteFetchContext * fetchContext;              //@synthesize fetchContext=_fetchContext - In the implementation block
@property (nonatomic,retain) CNAutocompleteStore * autocompleteStore;              //@synthesize autocompleteStore=_autocompleteStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)operationWithOwner:(id)arg1 text:(id)arg2 taskID:(id)arg3 autocompleteStore:(id)arg4 ;
-(id)originContextForResult:(id)arg1 ;
-(id)unifyRecipientsIfNeccesary:(id)arg1 ;
-(id)unifyingIdentifierForRecipient:(id)arg1 ;
-(void)configureForSearchTypes:(unsigned long long)arg1 ;
-(id)init;
-(void)setFetchRequestPromise:(CNPromise *)arg1 ;
-(BOOL)includeContacts;
-(BOOL)includeSuggestions;
-(BOOL)includeServers;
-(void)setSimulateResults:(BOOL)arg1 ;
-(CNAutocompleteFetchContext *)fetchContext;
-(void)setShouldIncludeGroupResults:(NSNumber *)arg1 ;
-(void)main;
-(BOOL)includeRecents;
-(void)setIncludeRecents:(BOOL)arg1 ;
-(BOOL)shouldUnifyResults;
-(void)setShouldUnifyResults:(BOOL)arg1 ;
-(void)setIncludeContacts:(BOOL)arg1 ;
-(void)setIncludeSuggestions:(BOOL)arg1 ;
-(void)setFetchContext:(CNAutocompleteFetchContext *)arg1 ;
-(CNAutocompleteStore *)autocompleteStore;
-(void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2 ;
-(void)autocompleteFetchDidFinish:(id)arg1 ;
-(void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2 ;
-(BOOL)autocompleteFetch:(id)arg1 shouldExpectSupplementalResultsForRequest:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setAutocompleteStore:(CNAutocompleteStore *)arg1 ;
-(void)cancel;
-(CNPromise *)fetchRequestPromise;
-(CNCancelationToken *)fetchRequestToken;
-(void)setIncludeServers:(BOOL)arg1 ;
-(BOOL)simulateResults;
-(id)_simulatedRecipientResults;
-(NSNumber *)shouldIncludeGroupResults;
-(void)setFetchRequestToken:(CNCancelationToken *)arg1 ;
@end

