/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
*/

#import <QuickLookThumbnailing/QuickLookThumbnailing-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class QLThumbnailVersion, QLCacheFileIdentifier;

@interface QLCacheVersionedFileIdentifier : NSObject <NSCopying, NSSecureCoding> {

	QLThumbnailVersion* _version;
	QLCacheFileIdentifier* _fileIdentifier;

}

@property (readonly) QLCacheFileIdentifier * fileIdentifier;              //@synthesize fileIdentifier=_fileIdentifier - In the implementation block
@property (readonly) QLThumbnailVersion * version;                        //@synthesize version=_version - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)versionedFileIdentifierWithThumbnailRequest:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(QLThumbnailVersion *)version;
-(QLCacheFileIdentifier *)fileIdentifier;
-(id)initWithFileIdentifier:(id)arg1 version:(id)arg2 ;
@end

