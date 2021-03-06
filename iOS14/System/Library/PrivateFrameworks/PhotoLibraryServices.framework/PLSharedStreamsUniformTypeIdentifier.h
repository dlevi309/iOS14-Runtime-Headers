/*
* Generated on Thursday, January 14, 2021 at 2:22:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/PLUniformTypeIdentifierIdentity.h>

@class NSString;

@interface PLSharedStreamsUniformTypeIdentifier : NSObject <PLUniformTypeIdentifierIdentity> {

	BOOL _conformsToRawImage;
	BOOL _conformsToImage;
	BOOL _conformsToMovie;
	NSString* _identifier;

}

@property (nonatomic,copy) NSString * identifier;                                                //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL conformsToRawImage;                                            //@synthesize conformsToRawImage=_conformsToRawImage - In the implementation block
@property (assign,nonatomic) BOOL conformsToImage;                                               //@synthesize conformsToImage=_conformsToImage - In the implementation block
@property (assign,nonatomic) BOOL conformsToMovie;                                               //@synthesize conformsToMovie=_conformsToMovie - In the implementation block
@property (getter=isPrimaryImageFormat,nonatomic,readonly) BOOL primaryImageFormat; 
@property (nonatomic,readonly) BOOL isPlayableVideo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isPlayableVideo;
-(BOOL)conformsToImage;
-(BOOL)isPrimaryImageFormat;
-(BOOL)conformsToRawImage;
-(BOOL)conformsToMovie;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setConformsToRawImage:(BOOL)arg1 ;
-(void)setConformsToImage:(BOOL)arg1 ;
-(void)setConformsToMovie:(BOOL)arg1 ;
@end

