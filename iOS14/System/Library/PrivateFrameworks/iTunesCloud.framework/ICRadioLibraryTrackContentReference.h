/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <iTunesCloud/ICRadioContentReference.h>
#import <libobjc.A.dylib/ICRadioContentReferenceContainable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface ICRadioLibraryTrackContentReference : ICRadioContentReference <ICRadioContentReferenceContainable, NSCopying, NSSecureCoding> {

	NSString* _containerID;
	NSString* _albumArtistName;
	NSString* _albumName;
	NSString* _artistName;
	NSString* _composerName;
	NSString* _copyright;
	NSNumber* _discCount;
	NSNumber* _discNumber;
	NSNumber* _fileSize;
	NSString* _genreName;
	NSNumber* _compilation;
	NSNumber* _duration;
	NSString* _kind;
	NSString* _name;
	NSNumber* _storeAdamIdentifier;
	NSNumber* _storeCloudIdentifier;
	NSNumber* _trackCount;
	NSNumber* _trackNumber;
	NSNumber* _year;
	NSString* _universalCloudLibraryID;

}

@property (nonatomic,copy) NSString * albumArtistName;                               //@synthesize albumArtistName=_albumArtistName - In the implementation block
@property (nonatomic,copy) NSString * albumName;                                     //@synthesize albumName=_albumName - In the implementation block
@property (nonatomic,copy) NSString * artistName;                                    //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,copy) NSString * composerName;                                  //@synthesize composerName=_composerName - In the implementation block
@property (nonatomic,copy) NSString * copyright;                                     //@synthesize copyright=_copyright - In the implementation block
@property (nonatomic,copy) NSNumber * discCount;                                     //@synthesize discCount=_discCount - In the implementation block
@property (nonatomic,copy) NSNumber * discNumber;                                    //@synthesize discNumber=_discNumber - In the implementation block
@property (nonatomic,copy) NSNumber * fileSize;                                      //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,copy) NSString * genreName;                                     //@synthesize genreName=_genreName - In the implementation block
@property (getter=isCompilation,nonatomic,copy) NSNumber * compilation;              //@synthesize compilation=_compilation - In the implementation block
@property (nonatomic,copy) NSNumber * duration;                                      //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) NSString * kind;                                          //@synthesize kind=_kind - In the implementation block
@property (nonatomic,copy) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSNumber * storeAdamIdentifier;                           //@synthesize storeAdamIdentifier=_storeAdamIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * storeCloudIdentifier;                          //@synthesize storeCloudIdentifier=_storeCloudIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * trackCount;                                    //@synthesize trackCount=_trackCount - In the implementation block
@property (nonatomic,copy) NSNumber * trackNumber;                                   //@synthesize trackNumber=_trackNumber - In the implementation block
@property (nonatomic,copy) NSNumber * year;                                          //@synthesize year=_year - In the implementation block
@property (nonatomic,copy) NSString * universalCloudLibraryID;                       //@synthesize universalCloudLibraryID=_universalCloudLibraryID - In the implementation block
@property (nonatomic,copy) NSString * containerID;                                   //@synthesize containerID=_containerID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setYear:(NSNumber *)arg1 ;
-(NSString *)albumArtistName;
-(NSNumber *)year;
-(void)setAlbumName:(NSString *)arg1 ;
-(void)setGenreName:(NSString *)arg1 ;
-(NSNumber *)trackNumber;
-(NSString *)albumName;
-(void)setDiscNumber:(NSNumber *)arg1 ;
-(NSNumber *)trackCount;
-(id)rawContentDictionary;
-(id)matchDictionary;
-(NSString *)containerID;
-(void)setDuration:(NSNumber *)arg1 ;
-(void)setComposerName:(NSString *)arg1 ;
-(NSString *)copyright;
-(void)setTrackNumber:(NSNumber *)arg1 ;
-(NSString *)composerName;
-(void)setArtistName:(NSString *)arg1 ;
-(long long)contentType;
-(NSNumber *)fileSize;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setContainerID:(NSString *)arg1 ;
-(NSString *)artistName;
-(NSString *)kind;
-(void)setCopyright:(NSString *)arg1 ;
-(NSNumber *)discCount;
-(NSString *)name;
-(NSString *)universalCloudLibraryID;
-(void)setUniversalCloudLibraryID:(NSString *)arg1 ;
-(NSNumber *)discNumber;
-(void)setKind:(NSString *)arg1 ;
-(id)isCompilation;
-(void)setAlbumArtistName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setFileSize:(NSNumber *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)genreName;
-(NSNumber *)storeAdamIdentifier;
-(void)setStoreAdamIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)storeCloudIdentifier;
-(void)setStoreCloudIdentifier:(NSNumber *)arg1 ;
-(void)setDiscCount:(NSNumber *)arg1 ;
-(void)setCompilation:(NSNumber *)arg1 ;
-(void)setTrackCount:(NSNumber *)arg1 ;
-(NSNumber *)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
