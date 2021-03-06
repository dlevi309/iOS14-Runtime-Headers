/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <libobjc.A.dylib/CNUICoreContactStoreFacade.h>

@class NSArray, CNContact, NSError, NSString;

@interface CNUICoreContactStoreTestFacade : NSObject <CNUICoreContactStoreFacade> {

	NSArray* _contacts;
	NSArray* _executedSaveRequests;
	NSArray* _executedFetchRequests;
	CNContact* _meContact;
	NSError* _saveError;
	NSError* _fetchError;

}

@property (nonatomic,retain) CNContact * meContact;                        //@synthesize meContact=_meContact - In the implementation block
@property (nonatomic,retain) NSArray * contacts;                           //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,retain) NSError * saveError;                          //@synthesize saveError=_saveError - In the implementation block
@property (nonatomic,retain) NSError * fetchError;                         //@synthesize fetchError=_fetchError - In the implementation block
@property (nonatomic,retain) NSArray * executedSaveRequests;               //@synthesize executedSaveRequests=_executedSaveRequests - In the implementation block
@property (nonatomic,retain) NSArray * executedFetchRequests;              //@synthesize executedFetchRequests=_executedFetchRequests - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contactsBySimulatingExecutionOfSaveRequest:(id)arg1 onContacts:(id)arg2 ;
-(void)setMeContact:(CNContact *)arg1 ;
-(void)setContacts:(NSArray *)arg1 ;
-(CNContact *)meContact;
-(NSArray *)contacts;
-(BOOL)executeSaveRequest:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(id)initWithContacts:(id)arg1 ;
-(NSError *)fetchError;
-(id)_crossPlatformUnifiedMeContactWithKeysToFetch:(id)arg1 error:(id*)arg2 ;
-(BOOL)enumerateContactsWithFetchRequest:(id)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)setFetchError:(NSError *)arg1 ;
-(NSError *)saveError;
-(void)commonInitWithMeContact:(id)arg1 contacts:(id)arg2 saveError:(id)arg3 fetchError:(id)arg4 ;
-(NSArray *)executedFetchRequests;
-(void)setExecutedFetchRequests:(NSArray *)arg1 ;
-(NSArray *)executedSaveRequests;
-(void)setExecutedSaveRequests:(NSArray *)arg1 ;
-(id)initWithSaveError:(id)arg1 fetchError:(id)arg2 ;
-(id)initWithMeContact:(id)arg1 contacts:(id)arg2 ;
-(void)setSaveError:(NSError *)arg1 ;
@end

