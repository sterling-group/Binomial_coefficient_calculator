program binomial_coeff
  integer :: start, x ,y, diff
  real(kind=16) ::  Nfac=1.0, Kfac=1, diff_fac=1, binomco, num, denom
  print *, 'insert K and N'
  read (*,*) x
  read (*,*) y
  do start=2, x
        Nfac = start*Nfac
  end do
  print *, Nfac
  
  do start=2, y
        Kfac = start*Kfac
  end do
  print *, Kfac

  diff = x-y

  do start=2, diff
        diff_fac = start*diff_fac
  end do
  print *, diff_fac

  num = Nfac
  denom = Kfac*diff_fac
  binomco = num/denom
  print *, 'Binomial Coefficient is'
  print *, binomco
end program binomial_coeff
