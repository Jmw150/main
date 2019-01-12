#! /bin/sh
wget http://groups.csail.mit.edu/mac/ftpdir/scm/slib-3b5-1.noarch.rpm
wget http://groups.csail.mit.edu/mac/ftpdir/scm/scm-5f2-1.x86_64.rpm
wget http://groups.csail.mit.edu/mac/ftpdir/scm/jacal-1c4-1.noarch.rpm
rpm -U slib-3b5-1.noarch.rpm scm-5f2-1.x86_64.rpm jacal-1c4-1.noarch.rpm
