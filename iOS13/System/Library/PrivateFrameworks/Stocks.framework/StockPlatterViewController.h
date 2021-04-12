/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <Stocks/StockChartViewDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class StockFetcher, Stock, UITableView, UIView, NetPreferences, StockUpdateManager, StockChartView, ChartUpdater, StocksStyle, StocksLayout, StockManager, UIButton, UILabel, NSString;

@interface StockPlatterViewController : UIViewController <StockChartViewDelegate, UITableViewDelegate, UITableViewDataSource> {

	StockFetcher* _stockFetcher;
	Stock* _stock;
	long long _chartInterval;
	UITableView* _stocksTableView;
	UIView* _statusBarView;
	NetPreferences* _netPreferences;
	StockUpdateManager* _stockUpdateManager;
	StockChartView* _chartView;
	ChartUpdater* _chartUpdater;
	StocksStyle* _style;
	StocksLayout* _layout;
	StockManager* _stockManager;
	UIButton* _attributionButton;
	UILabel* _exchangeStatusLabel;
	NSString* _stockTicker;
	long long _rowDataType;

}

@property (nonatomic,retain) UITableView * stocksTableView;                        //@synthesize stocksTableView=_stocksTableView - In the implementation block
@property (nonatomic,retain) UIView * statusBarView;                               //@synthesize statusBarView=_statusBarView - In the implementation block
@property (nonatomic,retain) NetPreferences * netPreferences;                      //@synthesize netPreferences=_netPreferences - In the implementation block
@property (nonatomic,retain) StockUpdateManager * stockUpdateManager;              //@synthesize stockUpdateManager=_stockUpdateManager - In the implementation block
@property (nonatomic,retain) StockChartView * chartView;                           //@synthesize chartView=_chartView - In the implementation block
@property (nonatomic,retain) ChartUpdater * chartUpdater;                          //@synthesize chartUpdater=_chartUpdater - In the implementation block
@property (nonatomic,retain) StocksStyle * style;                                  //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) Stock * stock;                                        //@synthesize stock=_stock - In the implementation block
@property (nonatomic,retain) StocksLayout * layout;                                //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) StockManager * stockManager;                          //@synthesize stockManager=_stockManager - In the implementation block
@property (nonatomic,retain) UIButton * attributionButton;                         //@synthesize attributionButton=_attributionButton - In the implementation block
@property (nonatomic,retain) UILabel * exchangeStatusLabel;                        //@synthesize exchangeStatusLabel=_exchangeStatusLabel - In the implementation block
@property (nonatomic,retain) NSString * stockTicker;                               //@synthesize stockTicker=_stockTicker - In the implementation block
@property (assign,nonatomic) long long chartInterval;                              //@synthesize chartInterval=_chartInterval - In the implementation block
@property (assign,nonatomic) long long rowDataType;                                //@synthesize rowDataType=_rowDataType - In the implementation block
@property (nonatomic,retain) StockFetcher * stockFetcher;                          //@synthesize stockFetcher=_stockFetcher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(StocksStyle *)style;
-(void)setStyle:(StocksStyle *)arg1 ;
-(StocksLayout *)layout;
-(void)setLayout:(StocksLayout *)arg1 ;
-(void)_cleanup;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(UIView *)statusBarView;
-(StockChartView *)chartView;
-(long long)chartInterval;
-(Stock *)stock;
-(void)setStock:(Stock *)arg1 ;
-(void)setChartInterval:(long long)arg1 ;
-(void)setStatusBarView:(UIView *)arg1 ;
-(void)setStocksTableView:(UITableView *)arg1 ;
-(UITableView *)stocksTableView;
-(void)setChartView:(StockChartView *)arg1 ;
-(void)setStockTicker:(NSString *)arg1 ;
-(NSString *)stockTicker;
-(void)_setupStockWithTicker:(id)arg1 ;
-(void)setAttributionButton:(UIButton *)arg1 ;
-(UIButton *)attributionButton;
-(NetPreferences *)netPreferences;
-(void)_attributionButtonPressed:(id)arg1 ;
-(void)setExchangeStatusLabel:(UILabel *)arg1 ;
-(UILabel *)exchangeStatusLabel;
-(ChartUpdater *)chartUpdater;
-(StockUpdateManager *)stockUpdateManager;
-(void)_updateExchangeData;
-(StockFetcher *)stockFetcher;
-(void)setStockFetcher:(StockFetcher *)arg1 ;
-(void)updateChartForInterval:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)setNetPreferences:(NetPreferences *)arg1 ;
-(void)setChartUpdater:(ChartUpdater *)arg1 ;
-(void)setStockUpdateManager:(StockUpdateManager *)arg1 ;
-(void)setStockManager:(StockManager *)arg1 ;
-(long long)rowDataType;
-(void)setRowDataType:(long long)arg1 ;
-(void)stockChartView:(id)arg1 chartIntervalDidChange:(long long)arg2 ;
-(BOOL)stockChartViewIsCurrentChartView:(id)arg1 ;
-(void)stockChartViewNeedsLoadingStatusUpdated:(id)arg1 ;
-(id)initWithStockTicker:(id)arg1 ;
-(StockManager *)stockManager;
@end
