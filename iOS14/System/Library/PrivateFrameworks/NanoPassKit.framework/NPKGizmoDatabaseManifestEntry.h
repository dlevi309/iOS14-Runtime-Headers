/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@class NSString, NSArray;

@interface NPKGizmoDatabaseManifestEntry : NSObject {

	NSString* _uniqueID;
	NSArray* _localManifestHashes;
	NSArray* _remoteManifestHashes;

}

@property (nonatomic,retain) NSString * uniqueID;                         //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,retain) NSArray * localManifestHashes;               //@synthesize localManifestHashes=_localManifestHashes - In the implementation block
@property (nonatomic,retain) NSArray * remoteManifestHashes;              //@synthesize remoteManifestHashes=_remoteManifestHashes - In the implementation block
-(void)setUniqueID:(NSString *)arg1 ;
-(NSString *)uniqueID;
-(id)description;
-(NSArray *)localManifestHashes;
-(NSArray *)remoteManifestHashes;
-(void)setLocalManifestHashes:(NSArray *)arg1 ;
-(void)setRemoteManifestHashes:(NSArray *)arg1 ;
@end

