/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <libobjc.A.dylib/CNUICoreFamilyMemberContactsModelFetching.h>

@protocol CNUICoreContactStoreFacade, CNUICoreFamilyInfoFetching, CNDowntimeWhitelistContainerFetching;
@class CNSchedulerProvider, NSString;

@interface CNUICoreFamilyMemberContactsModelRetriever : NSObject <CNUICoreFamilyMemberContactsModelFetching> {

	id<CNUICoreContactStoreFacade> _contactStore;
	id<CNUICoreFamilyInfoFetching> _familyInfoFetcher;
	id<CNDowntimeWhitelistContainerFetching> _downtimeContainerFetcher;
	CNSchedulerProvider* _schedulerProvider;

}

@property (nonatomic,readonly) id<CNUICoreContactStoreFacade> contactStore;                                    //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,readonly) id<CNUICoreFamilyInfoFetching> familyInfoFetcher;                               //@synthesize familyInfoFetcher=_familyInfoFetcher - In the implementation block
@property (nonatomic,readonly) id<CNDowntimeWhitelistContainerFetching> downtimeContainerFetcher;              //@synthesize downtimeContainerFetcher=_downtimeContainerFetcher - In the implementation block
@property (nonatomic,readonly) CNSchedulerProvider * schedulerProvider;                                        //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> backgroundOrImmediateScheduler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keysToFetch;
+(long long)contactFormatterStyle;
-(id<CNUICoreContactStoreFacade>)contactStore;
-(CNSchedulerProvider *)schedulerProvider;
-(id)init;
-(id)allContacts;
-(id)initWithFamilyMember:(id)arg1 schedulerProvider:(id)arg2 ;
-(id)initWithContactStoreFacade:(id)arg1 familyInfoFetcher:(id)arg2 downtimeContainerFetcher:(id)arg3 schedulerProvider:(id)arg4 ;
-(id<CNUICoreFamilyInfoFetching>)familyInfoFetcher;
-(id)modelBuilderForWhitelistedContacts:(id)arg1 familyInfo:(id)arg2 ;
-(id<CNDowntimeWhitelistContainerFetching>)downtimeContainerFetcher;
-(id<CNScheduler>)backgroundOrImmediateScheduler;
-(id)modelBuilderForContacts:(id)arg1 familyInfo:(id)arg2 ;
-(id)allContactsModel;
-(id)whitelistedContactsModel;
-(id)initWithDowntimeContainerFetcher:(id)arg1 schedulerProvider:(id)arg2 ;
@end

