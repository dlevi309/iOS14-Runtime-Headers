/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@class REMReminderChangeItem, NSMutableArray, NSArray;

@interface REMReminderAttachmentContextChangeItem : NSObject {

	REMReminderChangeItem* _reminderChangeItem;
	NSMutableArray* _mutableAttachments;

}

@property (nonatomic,retain) REMReminderChangeItem * reminderChangeItem;              //@synthesize reminderChangeItem=_reminderChangeItem - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableAttachments;                     //@synthesize mutableAttachments=_mutableAttachments - In the implementation block
@property (nonatomic,readonly) NSArray * attachments; 
@property (nonatomic,readonly) NSArray * fileAttachments; 
@property (nonatomic,readonly) NSArray * imageAttachments; 
@property (nonatomic,readonly) NSArray * urlAttachments; 
-(void)addAttachment:(id)arg1 ;
-(void)removeAttachment:(id)arg1 ;
-(NSArray *)attachments;
-(REMReminderChangeItem *)reminderChangeItem;
-(void)removeAllAttachments;
-(id)initWithReminderChangeItem:(id)arg1 ;
-(NSArray *)urlAttachments;
-(void)setReminderChangeItem:(REMReminderChangeItem *)arg1 ;
-(NSArray *)fileAttachments;
-(id)attachmentsOfClass:(Class)arg1 ;
-(void)insertAttachment:(id)arg1 afterAttachment:(id)arg2 ;
-(void)removeURLAttachments;
-(id)addURLAttachmentWithURL:(id)arg1 ;
-(void)removeAllAttachmentsWithClass:(Class)arg1 ;
-(NSArray *)imageAttachments;
-(id)addFileAttachmentWithURL:(id)arg1 error:(id*)arg2 ;
-(id)addFileAttachmentWithData:(id)arg1 uti:(id)arg2 ;
-(id)addImageAttachmentWithURL:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)addImageAttachmentWithData:(id)arg1 uti:(id)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 ;
-(id)setURLAttachmentWithURL:(id)arg1 ;
-(void)insertAttachment:(id)arg1 beforeAttachment:(id)arg2 ;
-(NSMutableArray *)mutableAttachments;
-(void)setMutableAttachments:(NSMutableArray *)arg1 ;
@end

