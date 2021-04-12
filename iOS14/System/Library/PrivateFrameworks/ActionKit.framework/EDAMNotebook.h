/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSString, NSNumber, EDAMPublishing, NSArray, EDAMBusinessNotebook, EDAMUser, EDAMNotebookRestrictions, EDAMNotebookRecipientSettings;

@interface EDAMNotebook : FATObject {

	NSString* _guid;
	NSString* _name;
	NSNumber* _updateSequenceNum;
	NSNumber* _defaultNotebook;
	NSNumber* _serviceCreated;
	NSNumber* _serviceUpdated;
	EDAMPublishing* _publishing;
	NSNumber* _published;
	NSString* _stack;
	NSArray* _sharedNotebookIds;
	NSArray* _sharedNotebooks;
	EDAMBusinessNotebook* _businessNotebook;
	EDAMUser* _contact;
	EDAMNotebookRestrictions* _restrictions;
	EDAMNotebookRecipientSettings* _recipientSettings;

}

@property (nonatomic,retain) NSString * guid;                                                //@synthesize guid=_guid - In the implementation block
@property (nonatomic,retain) NSString * name;                                                //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSNumber * updateSequenceNum;                                   //@synthesize updateSequenceNum=_updateSequenceNum - In the implementation block
@property (nonatomic,retain) NSNumber * defaultNotebook;                                     //@synthesize defaultNotebook=_defaultNotebook - In the implementation block
@property (nonatomic,retain) NSNumber * serviceCreated;                                      //@synthesize serviceCreated=_serviceCreated - In the implementation block
@property (nonatomic,retain) NSNumber * serviceUpdated;                                      //@synthesize serviceUpdated=_serviceUpdated - In the implementation block
@property (nonatomic,retain) EDAMPublishing * publishing;                                    //@synthesize publishing=_publishing - In the implementation block
@property (nonatomic,retain) NSNumber * published;                                           //@synthesize published=_published - In the implementation block
@property (nonatomic,retain) NSString * stack;                                               //@synthesize stack=_stack - In the implementation block
@property (nonatomic,retain) NSArray * sharedNotebookIds;                                    //@synthesize sharedNotebookIds=_sharedNotebookIds - In the implementation block
@property (nonatomic,retain) NSArray * sharedNotebooks;                                      //@synthesize sharedNotebooks=_sharedNotebooks - In the implementation block
@property (nonatomic,retain) EDAMBusinessNotebook * businessNotebook;                        //@synthesize businessNotebook=_businessNotebook - In the implementation block
@property (nonatomic,retain) EDAMUser * contact;                                             //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) EDAMNotebookRestrictions * restrictions;                        //@synthesize restrictions=_restrictions - In the implementation block
@property (nonatomic,retain) EDAMNotebookRecipientSettings * recipientSettings;              //@synthesize recipientSettings=_recipientSettings - In the implementation block
+(id)structName;
+(id)structFields;
-(EDAMUser *)contact;
-(void)setContact:(EDAMUser *)arg1 ;
-(NSString *)guid;
-(void)setPublished:(NSNumber *)arg1 ;
-(void)setStack:(NSString *)arg1 ;
-(NSString *)stack;
-(NSString *)name;
-(NSNumber *)published;
-(EDAMNotebookRestrictions *)restrictions;
-(void)setRestrictions:(EDAMNotebookRestrictions *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(void)setPublishing:(EDAMPublishing *)arg1 ;
-(NSNumber *)updateSequenceNum;
-(void)setUpdateSequenceNum:(NSNumber *)arg1 ;
-(NSNumber *)serviceCreated;
-(void)setServiceCreated:(NSNumber *)arg1 ;
-(NSNumber *)serviceUpdated;
-(void)setServiceUpdated:(NSNumber *)arg1 ;
-(EDAMNotebookRecipientSettings *)recipientSettings;
-(void)setRecipientSettings:(EDAMNotebookRecipientSettings *)arg1 ;
-(NSNumber *)defaultNotebook;
-(void)setDefaultNotebook:(NSNumber *)arg1 ;
-(EDAMPublishing *)publishing;
-(NSArray *)sharedNotebookIds;
-(void)setSharedNotebookIds:(NSArray *)arg1 ;
-(NSArray *)sharedNotebooks;
-(void)setSharedNotebooks:(NSArray *)arg1 ;
-(EDAMBusinessNotebook *)businessNotebook;
-(void)setBusinessNotebook:(EDAMBusinessNotebook *)arg1 ;
@end
