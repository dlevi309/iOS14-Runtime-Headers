/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@class NSMutableDictionary;

@interface MFAttachmentPlaceholder : NSObject {

	NSMutableDictionary* _jsonDictionary;

}
+(id)placeholder;
+(BOOL)isPlaceholderSerializedRepresentation:(id)arg1 ;
+(id)placeholderFromSerializedRepresentation:(id)arg1 ;
+(id)dataForPlaceholder:(id)arg1 ;
+(void)cloneFileAtURL:(id)arg1 toPlaceholderURL:(id)arg2 ;
+(BOOL)writeData:(id)arg1 forURL:(id)arg2 ;
+(id)placeholderDirectory;
+(id)_placeholderMagic;
+(void)removePlaceholderForFileURL:(id)arg1 ;
+(id)_localStoreURLForFileData:(id)arg1 contentID:(id)arg2 ;
+(id)attachmentPlaceholderForFileURL:(id)arg1 fileName:(id)arg2 fileSize:(long long)arg3 type:(id)arg4 contentID:(id)arg5 ;
+(id)attachmentPlaceholderForData:(id)arg1 fileName:(id)arg2 type:(id)arg3 contentID:(id)arg4 ;
+(BOOL)hasPlaceholderRepresentation:(id)arg1 ;
+(id)placeholderRepresentations:(id)arg1 ;
+(BOOL)setFileProtectionForFileAt:(id)arg1 error:(id*)arg2 ;
+(void)removePlaceholder:(id)arg1 ;
+(id)serializedPlaceholderForFileName:(id)arg1 fileSize:(long long)arg2 mimeType:(id)arg3 contentID:(id)arg4 ;
-(id)init;
-(id)description;
-(unsigned long long)fileSize;
-(id)serializedRepresentation;
-(id)fileURL;
-(id)mimeType;
-(void)setMimeType:(id)arg1 ;
-(void)setFileSize:(unsigned long long)arg1 ;
-(id)fileName;
-(void)setFileName:(id)arg1 ;
-(id)contentID;
-(void)setContentID:(id)arg1 ;
-(id)fileURLString;
-(BOOL)useMailDrop;
-(void)_setJSONDictionary:(id)arg1 ;
-(void)setFileURLString:(id)arg1 ;
-(void)setUseMailDrop:(BOOL)arg1 ;
@end
