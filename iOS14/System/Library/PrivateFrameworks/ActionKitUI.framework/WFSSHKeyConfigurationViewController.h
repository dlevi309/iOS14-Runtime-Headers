/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/WFSSHKeyGenerationViewControllerDelegate.h>

@protocol WFSSHKeyConfigurationViewControllerDelegate;
@class WFTableDataSource, WFItemBasedTableSection, WFBasicTableItem, WFSSHKeyPair, NSString;

@interface WFSSHKeyConfigurationViewController : UITableViewController <WFSSHKeyGenerationViewControllerDelegate> {

	id<WFSSHKeyConfigurationViewControllerDelegate> _delegate;
	WFTableDataSource* _dataSource;
	WFItemBasedTableSection* _keyInfoSection;
	WFItemBasedTableSection* _actionsSection;
	WFBasicTableItem* _typeItem;
	WFBasicTableItem* _md5HashItem;
	WFBasicTableItem* _sha256HashItem;
	WFBasicTableItem* _bitsItem;
	WFBasicTableItem* _commentItem;
	WFBasicTableItem* _exportItem;
	WFBasicTableItem* _generateItem;
	WFSSHKeyPair* _keyPair;

}

@property (nonatomic,readonly) WFTableDataSource * dataSource;                                             //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) WFItemBasedTableSection * keyInfoSection;                                   //@synthesize keyInfoSection=_keyInfoSection - In the implementation block
@property (nonatomic,readonly) WFItemBasedTableSection * actionsSection;                                   //@synthesize actionsSection=_actionsSection - In the implementation block
@property (nonatomic,readonly) WFBasicTableItem * typeItem;                                                //@synthesize typeItem=_typeItem - In the implementation block
@property (nonatomic,readonly) WFBasicTableItem * md5HashItem;                                             //@synthesize md5HashItem=_md5HashItem - In the implementation block
@property (nonatomic,readonly) WFBasicTableItem * sha256HashItem;                                          //@synthesize sha256HashItem=_sha256HashItem - In the implementation block
@property (nonatomic,readonly) WFBasicTableItem * bitsItem;                                                //@synthesize bitsItem=_bitsItem - In the implementation block
@property (nonatomic,readonly) WFBasicTableItem * commentItem;                                             //@synthesize commentItem=_commentItem - In the implementation block
@property (nonatomic,readonly) WFBasicTableItem * exportItem;                                              //@synthesize exportItem=_exportItem - In the implementation block
@property (nonatomic,readonly) WFBasicTableItem * generateItem;                                            //@synthesize generateItem=_generateItem - In the implementation block
@property (nonatomic,retain) WFSSHKeyPair * keyPair;                                                       //@synthesize keyPair=_keyPair - In the implementation block
@property (assign,nonatomic,__weak) id<WFSSHKeyConfigurationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)publicKey;
-(void)donePressed:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(id<WFSSHKeyConfigurationViewControllerDelegate>)delegate;
-(WFBasicTableItem *)generateItem;
-(WFTableDataSource *)dataSource;
-(void)setDelegate:(id<WFSSHKeyConfigurationViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(WFSSHKeyPair *)keyPair;
-(void)setKeyPair:(WFSSHKeyPair *)arg1 ;
-(void)keyGenerationViewController:(id)arg1 didFinishWithKeyPair:(id)arg2 ;
-(void)updateVisibleItems;
-(id)truncatedHash:(id)arg1 ;
-(id)localizedDisplayNameForType:(unsigned long long)arg1 ;
-(void)showHashWithType:(unsigned long long)arg1 ;
-(WFItemBasedTableSection *)keyInfoSection;
-(WFItemBasedTableSection *)actionsSection;
-(WFBasicTableItem *)typeItem;
-(WFBasicTableItem *)md5HashItem;
-(WFBasicTableItem *)sha256HashItem;
-(WFBasicTableItem *)bitsItem;
-(WFBasicTableItem *)commentItem;
-(WFBasicTableItem *)exportItem;
@end

