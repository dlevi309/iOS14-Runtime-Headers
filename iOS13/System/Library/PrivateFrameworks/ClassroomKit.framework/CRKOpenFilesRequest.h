/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskRequest.h>

@class NSSet, NSString, NSData;

@interface CRKOpenFilesRequest : CATTaskRequest {

	BOOL _autoAccept;
	NSSet* _fileItems;
	NSString* _senderName;
	NSData* _previewImageData;
	NSString* _sourceBundleIdentifier;

}

@property (nonatomic,copy) NSSet * fileItems;                              //@synthesize fileItems=_fileItems - In the implementation block
@property (nonatomic,copy) NSString * senderName;                          //@synthesize senderName=_senderName - In the implementation block
@property (nonatomic,copy) NSData * previewImageData;                      //@synthesize previewImageData=_previewImageData - In the implementation block
@property (assign,nonatomic) BOOL autoAccept;                              //@synthesize autoAccept=_autoAccept - In the implementation block
@property (nonatomic,copy) NSString * sourceBundleIdentifier;              //@synthesize sourceBundleIdentifier=_sourceBundleIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)fileItems;
-(void)setFileItems:(NSSet *)arg1 ;
-(NSData *)previewImageData;
-(void)setPreviewImageData:(NSData *)arg1 ;
-(void)setSourceBundleIdentifier:(NSString *)arg1 ;
-(NSString *)sourceBundleIdentifier;
-(NSString *)senderName;
-(void)setSenderName:(NSString *)arg1 ;
-(BOOL)autoAccept;
-(void)setAutoAccept:(BOOL)arg1 ;
@end

