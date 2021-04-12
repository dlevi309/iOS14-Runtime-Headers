/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSString, NSData;

@interface QLThumbnailVersion : NSObject <NSSecureCoding> {

	NSDate* _modificationDate;
	unsigned long long _fileSize;
	NSString* _generatorID;
	NSString* _generatorVersion;
	NSData* _versionIdentifier;
	unsigned long long _ino;

}

@property (copy) NSString * generatorID;                                                       //@synthesize generatorID=_generatorID - In the implementation block
@property (copy) NSString * generatorVersion;                                                  //@synthesize generatorVersion=_generatorVersion - In the implementation block
@property (copy) NSDate * modificationDate;                                                    //@synthesize modificationDate=_modificationDate - In the implementation block
@property (copy) NSData * versionIdentifier;                                                   //@synthesize versionIdentifier=_versionIdentifier - In the implementation block
@property (assign) unsigned long long fileSize;                                                //@synthesize fileSize=_fileSize - In the implementation block
@property (getter=isDefaultVersion,readonly) BOOL defaultVersion; 
@property (getter=isAutomaticallyGenerated,readonly) BOOL automaticallyGenerated; 
@property (assign) unsigned long long ino;                                                     //@synthesize ino=_ino - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)modificationDate;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(unsigned long long)ino;
-(id)init;
-(unsigned long long)fileSize;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setModificationDate:(NSDate *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setFileSize:(unsigned long long)arg1 ;
-(void)setVersionIdentifier:(NSData *)arg1 ;
-(void)setIno:(unsigned long long)arg1 ;
-(NSData *)versionIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isDefaultVersion;
-(id)initWithFileURL:(id)arg1 automaticallyGenerated:(BOOL)arg2 ;
-(void)setGeneratorID:(NSString *)arg1 ;
-(void)setGeneratorVersion:(NSString *)arg1 ;
-(id)initWithFPItem:(id)arg1 automaticallyGenerated:(BOOL)arg2 ;
-(id)initWithModificationDate:(id)arg1 fileSize:(unsigned long long)arg2 versionIdentifier:(id)arg3 ino:(unsigned long long)arg4 generatorID:(id)arg5 generatorVersion:(id)arg6 ;
-(void)getGeneratorID:(id*)arg1 version:(id*)arg2 ;
-(id)initWithFileURL:(id)arg1 generatorID:(id)arg2 generatorVersion:(id)arg3 ;
-(id)initWithFPItem:(id)arg1 generatorID:(id)arg2 generatorVersion:(id)arg3 ;
-(NSString *)generatorID;
-(NSString *)generatorVersion;
-(BOOL)shouldBeInvalidatedByThumbnailWithVersion:(id)arg1 ;
-(BOOL)isAutomaticallyGenerated;
@end
