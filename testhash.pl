#!/usr/bin/env perl
use strict;
use warnings;

use Data::Dumper;
use XML::Simple;

my %storage;
my $file1 = 'product.xml';
my $file2 = 'product2.xml';


my $xmlref = XMLin($file1);
#print Dumper $ref;
store_data($xmlref, \%storage);

#=== Read another file

my $xmlref2 = XMLin($file2);
#print Dumper $ref2;
store_data($xmlref2, \%storage);

print Dumper \%storage;
exit;

sub store_data {
	my ($xml, $store) = @_;
	
	if (exists $store->{$xml->{licenseName}}) {
		# update with new information
		my $ref = $store->{$xml->{licenseName}};
  		$ref->{name} .= " $xml->{name}";
	} else {
		# new entry
		$store->{$xml->{licenseName}} = {
			name => $xml->{name},
			basecode => $xml->{baseCode},
			productName => $xml->{productName},
			externalProductIdentifier => $xml->{externalProductIdentifier}
		};
	}
}
