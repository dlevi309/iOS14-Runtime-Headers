/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVTaskGroup.h>

@class NSURL, NSString, NSData, NSDictionary, NSMutableDictionary;

@interface CalDAVAddManagedAttachmentsTaskGroup : CoreDAVTaskGroup {

	NSURL* _postURLWithQuery;
	BOOL _hadPreconditionFailure;
	int _state;
	NSString* _previousETag;
	NSString* _previousScheduleTag;
	NSData* _updatedResourcePayload;
	NSString* _updatedETag;
	NSString* _updatedScheduleTag;
	NSDictionary* _postFailureSizes;
	NSURL* _resourceURL;
	NSDictionary* _attachments;
	NSDictionary* _contentTypes;
	NSMutableDictionary* _filenamesToServerLocation;

}

@property (assign,nonatomic) int state;                                                    //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSURL * resourceURL;                                          //@synthesize resourceURL=_resourceURL - In the implementation block
@property (nonatomic,retain) NSDictionary * attachments;                                   //@synthesize attachments=_attachments - In the implementation block
@property (nonatomic,retain) NSDictionary * contentTypes;                                  //@synthesize contentTypes=_contentTypes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * filenamesToServerLocation;              //@synthesize filenamesToServerLocation=_filenamesToServerLocation - In the implementation block
@property (nonatomic,retain) NSData * updatedResourcePayload;                              //@synthesize updatedResourcePayload=_updatedResourcePayload - In the implementation block
@property (assign,nonatomic) BOOL hadPreconditionFailure;                                  //@synthesize hadPreconditionFailure=_hadPreconditionFailure - In the implementation block
@property (nonatomic,retain) NSString * updatedETag;                                       //@synthesize updatedETag=_updatedETag - In the implementation block
@property (nonatomic,retain) NSString * updatedScheduleTag;                                //@synthesize updatedScheduleTag=_updatedScheduleTag - In the implementation block
@property (nonatomic,retain) NSDictionary * postFailureSizes;                              //@synthesize postFailureSizes=_postFailureSizes - In the implementation block
@property (nonatomic,retain) NSString * previousETag;                                      //@synthesize previousETag=_previousETag - In the implementation block
@property (nonatomic,retain) NSString * previousScheduleTag;                               //@synthesize previousScheduleTag=_previousScheduleTag - In the implementation block
-(void)setAttachments:(NSDictionary *)arg1 ;
-(NSDictionary *)attachments;
-(void)setResourceURL:(NSURL *)arg1 ;
-(NSDictionary *)contentTypes;
-(void)setContentTypes:(NSDictionary *)arg1 ;
-(id)initWithAccountInfoProvider:(id)arg1 resourceURL:(id)arg2 attachments:(id)arg3 contentTypes:(id)arg4 taskManager:(id)arg5 ;
-(void)setPreviousETag:(NSString *)arg1 ;
-(void)setPreviousScheduleTag:(NSString *)arg1 ;
-(NSString *)updatedETag;
-(NSString *)updatedScheduleTag;
-(void)startTaskGroup;
-(NSMutableDictionary *)filenamesToServerLocation;
-(void)setState:(int)arg1 ;
-(int)state;
-(NSURL *)resourceURL;
-(NSString *)previousETag;
-(void)_finishWithError:(id)arg1 state:(int)arg2 ;
-(id)urlWithQuery;
-(NSString *)previousScheduleTag;
-(void)_sendAttachments;
-(void)setUpdatedResourcePayload:(NSData *)arg1 ;
-(void)setUpdatedScheduleTag:(NSString *)arg1 ;
-(void)setUpdatedETag:(NSString *)arg1 ;
-(void)setHadPreconditionFailure:(BOOL)arg1 ;
-(void)setPostFailureSizes:(NSDictionary *)arg1 ;
-(BOOL)_postedLastAttachment;
-(void)_fetchUpdatedContent;
-(BOOL)hadPreconditionFailure;
-(void)_handlePostResponse:(id)arg1 ;
-(NSData *)updatedResourcePayload;
-(NSDictionary *)postFailureSizes;
-(void)setFilenamesToServerLocation:(NSMutableDictionary *)arg1 ;
@end

