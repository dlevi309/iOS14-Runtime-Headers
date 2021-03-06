/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/VNRequestRevisionProviding.h>

@class NSDictionary;

@interface VNClassificationCustomHierarchy : NSObject <NSCopying, NSSecureCoding, VNRequestRevisionProviding> {

	shared_ptr<vision::mod::ImageClassifier_HierarchicalModel>* _hierarchicalModel_DO_NOT_ACCESS_DIRECTLY;
	NSDictionary* _additionalRelationships;
	unsigned long long _sceneClassificationRequestRevision;
	unsigned long long _sceneClassificationRequestDetectionLevel;

}

@property (nonatomic,copy,readonly) NSDictionary * relationships; 
@property (nonatomic,readonly) unsigned long long requestRevision; 
+(BOOL)supportsSecureCoding;
+(id)customHierarchyForRequest:(id)arg1 error:(id*)arg2 ;
-(NSDictionary *)relationships;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSceneClassificationRequestRevision:(unsigned long long)arg1 detectionLevel:(unsigned long long)arg2 ;
-(shared_ptr<vision::mod::ImageClassifier_HierarchicalModel>*)hierarchicalModelAndReturnError:(id*)arg1 ;
-(shared_ptr<vision::mod::ImageClassifier_HierarchicalModel>*)newHierarchicalModelAndReturnError:(id*)arg1 ;
-(BOOL)_addRelationships:(id)arg1 error:(id*)arg2 ;
-(id)customHierarchyWithAdditionalParent:(id)arg1 children:(id)arg2 error:(id*)arg3 ;
-(id)customHierarchyWithAdditionalRelationships:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)requestDetectionLevel;
-(unsigned long long)requestRevision;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

